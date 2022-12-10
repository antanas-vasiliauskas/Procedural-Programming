// Antanas Vasiliauskas 3 grupe || 4 uzd 1 variantas
#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

int main(){
    // Linked list
    List *list = create_list();
    add_element(&list, 111);
    add_element(&list, 22);
    add_element(&list, 3333);
    add_element(&list, 4);
    add_element(&list, 555);

    int index = 0;
    printf("Iveskite elemento indeksa: ");
    scanf("%d", &index);

    List *element = get_element(list, index);
    if(element == NULL){
        printf("Toks elementas neegzistuoja.\n");
    }
    else{
        printf("%d\n", element->value);
    }
    delete_list(&list);
}


