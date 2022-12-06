#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct Student {
    char name[30];
    char surname[30];
    int course;                 // year of study
    double average;             // average grade

    int load;                   // number of courses
    char courses[10][30];       // course names
    int grades[10];             // course grades

    char languages[100];        // spoken languages

} Student;

char** str_split(char* a_str, const char a_delim)
{
    // Function modifies given string, so complete operation with string copy.
    char* a_str_copy = strdup(a_str);
    char** result    = 0;
    size_t count     = 0;
    char* tmp        = a_str_copy;
    char* last_comma = 0;
    char delim[2];
    delim[0] = a_delim;
    delim[1] = 0;

    /* Count how many elements will be extracted. */
    while (*tmp)
    {
        if (a_delim == *tmp)
        {
            count++;
            last_comma = tmp;
        }
        tmp++;
    }

    /* Add space for trailing token. */
    count += last_comma < (a_str_copy + strlen(a_str_copy) - 1);

    /* Add space for terminating null string so caller
       knows where the list of returned strings ends. */
    count++;

    result = malloc(sizeof(char*) * count);

    if (result)
    {
        size_t idx  = 0;
        char* token = strtok(a_str_copy, delim);

        while (token)
        {
            assert(idx < count);
            *(result + idx++) = strdup(token);
            token = strtok(0, delim);
        }
        assert(idx == count - 1);
        *(result + idx) = 0;
    }

    return result;
}


int main(int argc, char *argv[]) {
    FILE *db = NULL;
    // open database file for reading, provide a parameter or use default "db.bin"
    if (argc > 1)
        db = fopen(argv[1], "rb");
    else
        db = fopen("db.bin", "rb");

    if (db){
        Student students[1000];         // all the data goes here
        int size = 0;                   // how many students in database

        // reading data from file
        fread(&size, sizeof(int), 1, db);

        for (int i = 0; i < size; i++){
            fread(&students[i], sizeof(Student), 1, db);
        }
        printf("%d records loaded succesfully\n", size);
        /// memcpy(students[50].languages, "English English", sizeof("English English")); // Test language duplicate detection


        // MODIFY CODE BELOW

        int counterDemo = 0; // for counting students


        for (int i = 0; i < size; ++i){ // process all the student records in database
            Student s = students[i]; // store data for each student in s

            char condition = 0;

            // check for course duplicates
            for(int j = 0; j < s.load; j++){
                for(int k = j+1; k < s.load; k++){
                    if(!strcmp(s.courses[j], s.courses[k])){
                        condition = 1;
                        break;
                    }
                }
            }
            // check for language duplicates
            char** tokens = str_split(s.languages, ' ');
            if (tokens){
                int j, k;
                for (j = 0; *(tokens + j); j++){
                    for (k = j + 1; *(tokens + k); k++){
                        if(!strcmp(*(tokens + j), *(tokens + k))){
                            condition = 1;
                            break;
                        }
                    }
                }

            }
            free(tokens);

            if(condition){ // *** first filter, conditions on the student

                printf("%s %s\n    Year of study: %d\n    Average grade: %f\n    Number of courses: %d\n", s.name, s.surname, s.course, s.average, s.load); // print student data
                int anotherDemo = 0; // for counting courses/grades
                for (int i = 0; i < s.load; ++i){ // process each course taken by the student
                    if(1){ // *** second filter, conditions on the course/grade
                        ++anotherDemo; // counting courses
                        printf("        Course: %s (Grade: %d)\n", s.courses[i], s.grades[i]);
                    }
                }
                printf("    Languages: %s\n", s.languages);

                if (anotherDemo == s.load) // *** third filter, various other conditions
                    ++counterDemo; // counting studfents
            }
        }
        printf("Filter applied, %d students found\n", counterDemo); // how many passed the filters
        fclose(db);
    } else {
        printf("File db.bin not found, check current folder\n");
    }

    return 0;
}

