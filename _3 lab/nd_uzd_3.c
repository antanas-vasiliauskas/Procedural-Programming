/// 3 Uzduotis 1 variantas Antanas Vasiliauskas 3 grupe
#include <stdlib.h>
#include <stdio.h>
#define LINE_MAX 1024

/// modifikuojama tekstine eilute
char *parse_line(char *line){
    char* parsed_line = malloc(LINE_MAX * sizeof(char));
    parsed_line[LINE_MAX-1] = 0;
    int cursor = 0;
    for(int i = 0; i < LINE_MAX-1 && line[i] != '\n'; i++){
        if(line[i] != line[i+1] || line[i] == ' '){
            parsed_line[cursor++] = line[i];
        }
        else{
            int count = 1;
            while(line[i] == line[i+1]){
                i++;
                count++;
            }
            parsed_line[cursor++] = line[i];
            parsed_line[cursor++] = '$';
            int len = sprintf(parsed_line+cursor, "%d", count);
            cursor+=len;
        }

    }
    parsed_line[cursor++] = '\n';
    parsed_line[cursor++] = '\0';
    return parsed_line;
}

int main(int argc, char* argv[]){

    if(argc < 3){
        printf("Komandineje eiluteje nepateikti failu vardai.\n");
        return 0;
    }

    FILE *fpin = fopen(argv[1], "r");
    if(fpin == NULL){
        printf("Nepavyko atidaryti duomenu failo nurodytu vardu.\n");
        return 0;
    }

    /// Atidaromas rezultatu failas
    FILE *fpout = fopen(argv[2], "w");
    if(fpout == NULL){
        printf("Nepavyko sukurti rezultatu failo.\n");
        return 0;
    }

    /// Skaitomos linijos is failo, jos modifikuojamos ir tada irasomos i faila.
    char line[LINE_MAX] = {0};
    while (fgets(line, LINE_MAX, fpin)){
        char* parsed_line = parse_line(line);
        fprintf(fpout, "%s", parsed_line);
        free(parsed_line);
    }
    fclose(fpin);
    fclose(fpout);
    return 0;
}
