// Antanas Vasiliauskas 3 grupe
// Vienpusio saraso strukturos ir proceduru failas.
#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"


List *create_list(){
    return NULL;
}

// Adds element to the back of the list
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

// Frees memory
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

void print_list(List *list){
    while (list != NULL){
        printf("%d ", list->value);
        list = list->next;
    }
    printf("\n");
}

void delete_element(List** list, int index){
    List *previous = NULL;
    List *current = *list;

    if(index < 0){
        printf("Indeksas yra nekorektiskas (neigiamas arba ne skaicius).\n");
        return;
    }
    for(int i = 0; i < index; i++){
        if(current == NULL || current->next == NULL){
            printf("Elemento nurodytame indekse nera.\n");
            return;
        }
        previous = current;
        current = current->next;
    }
    if(previous == NULL){
        List *tmp = list;
        *list = (*list)->next;
        free(tmp);
    }
    else{
        previous->next = current->next;
        free(current);
    }
}