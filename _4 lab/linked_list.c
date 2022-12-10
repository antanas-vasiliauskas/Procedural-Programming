// Antanas Vasiliauskas 3 grupe || 4 uzd 1 variantas
#include <stdlib.h>

struct List{
    int value;
    struct List *next;
} typedef List;

List *create_list(){
    return NULL;
}

void add_element(List **list, int value){
    List *new = (List*) malloc(sizeof(List));
    new->value = value;
    new->next = NULL;

    if(*list == NULL){
        *list = new;
        return;
    }

    List *current = *list;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = new;
}

void delete_list(List **list){
    List *current = *list;
    while (current != NULL){
        List* previous = current;
        current = previous->next;
        free(previous);
    }
    *list = NULL;
}

List *get_element(List* list, int index){
    if(index < 0)
        return NULL;
    for(int i = 0; i < index; i++){
        if(list == NULL){
            return list;
        }
        list = list->next;
    }
    return list;
}
