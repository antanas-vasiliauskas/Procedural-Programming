#include <stdio.h>
#include <stdlib.h>

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

int get_word_count(char* seq){
    int len = strlen(seq);
    int word_count = 0;
    for(int j = 0; j < len; j++){
        if(seq[j] == ' ')
            word_count++;
    }
    return word_count+1;
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


        // MODIFY CODE BELOW

        int counterDemo = 0; // for counting students

        int max_words = 0;
        for (int i = 0; i < size; ++i){ // process each course taken by the student
            int word_count = get_word_count(students[i].languages);
            if(word_count > max_words) max_words = word_count;
        }

        for (int i = 0; i < size; ++i){ // process all the student records in database
            Student s = students[i]; // store data for each student in s


            if(get_word_count(s.languages) == max_words){ // *** first filter, conditions on the student

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
