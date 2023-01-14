#include "htable_header.h"

int main() {
    HashTable* ht = create_table(CAPACITY);
    ht_insert(ht, "1", "First address");
    ht_insert(ht, "2", "Second address");
    ht_insert(ht, "25", "Emeka");
    print_search(ht, "1");
    print_search(ht, "2");
    print_search(ht, "3");
    print_search(ht, "25");
    print_table(ht);
    free_table(ht);
    return 0;
}
