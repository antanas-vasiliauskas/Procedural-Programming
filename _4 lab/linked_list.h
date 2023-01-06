// Antanas Vasiliauskas 3 grupe
// Vienpusio saraso strukturos ir proceduru antrastinis failas.
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
struct List{
    int value;
    struct List *next;
    
} typedef List;

List *create_list();
void add_element(List **list, int value);
List *get_element(List* list, int index);
void delete_list(List **list);
void delete_element(List** list, int index);
void print_list(List *list);
#endif
