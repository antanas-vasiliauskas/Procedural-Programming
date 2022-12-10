// Antanas Vasiliauskas 3 grupe || 4 uzd 1 variantas
struct List{
    int value;
    struct List *next;
} typedef List;

List *create_list();
void add_element(List **list, int value);
List *get_element(List* list, int index);
void delete_list(List **list);
