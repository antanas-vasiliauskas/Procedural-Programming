// Antanas Vasiliauskas 3 grupe
// 4 uzd 1 varianto sprendimas
// Salyga:  Sudaryti vienpusį sąrašą. Parašyti procedūrą, kuri išmeta numeriu nurodytą elementą.
//          Jeigu tokio elemento nėra, turi būti išvestas atitinkamas pranešimas.
#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"


int main(){
    // Singly Linked List
    List *list = create_list();

    add_element(&list, 111);
    add_element(&list, 22);
    add_element(&list, 3333);
    add_element(&list, 4);
    add_element(&list, 555);
    int index = -1;

    printf("Iveskite elemento indeksa: ");
    scanf("%d", &index);
    delete_element(&list, index);
    print_list(list);
    delete_list(&list);
}