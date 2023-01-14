#include "htable_header.h"

int main() {
    HashTable* ht = create_table(CAPACITY);
    ht_insert(ht, "1", "First address");
    ht_insert(ht, "2", "Second address");
    ht_insert(ht, "Hel", "Third address");
    ht_insert(ht, "Cau", "Fourth address");
    ht_insert(ht, "TMx", "Fifth address");
    ht_insert(ht, "Bmi", "Sixth address");
    ht_insert(ht, "Alx", "Coding School");
    ht_insert(ht, "HYx", "Extra Collision");
    print_search(ht, "1");
    print_search(ht, "2");
    print_search(ht, "3");
    print_search(ht, "Hel");
    print_search(ht, "TMx");
    print_search(ht, "Cau");  // Collisions!
    print_table(ht);
    ht_delete(ht, "1");
    ht_delete(ht, "Cau");
    print_table(ht);
    free_table(ht);
    return 0;
}
