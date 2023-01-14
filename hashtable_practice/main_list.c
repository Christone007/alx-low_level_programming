#include "htable_header.h"

int main(void)
{
	printf("Enter program\n");

	Ht_item* item1;
	Ht_item* item2;
	Ht_item* item3;
	Ht_item* item4;
	Ht_item* item5;
	Ht_item* item6;
	Ht_item* item7;

	item1 = create_item("item1", "value1");
	item2 = create_item("item2", "value2");
	item3 = create_item("item3", "value3");
	item4 = create_item("item4", "value4");
	item5 = create_item("item5", "value5");
	item6 = create_item("item6", "value6");
	item7 = create_item("item7", "value7");

	printf("Created all items\n");

	LinkedList* list = NULL;
	list = linkedlist_insert(list, item1);
	list = linkedlist_insert(list, item2);
	list = linkedlist_insert(list, item3);
	list = linkedlist_insert(list, item4);
	list = linkedlist_insert(list, item5);
	list = linkedlist_insert(list, item6);
	list = linkedlist_insert(list, item7);

	printf("Inserted items into list\n");
	printf("\n---------------\n");


	print_list(list);
	printf("\n---------------\n");

	Ht_item* removed = linkedlist_remove(list);
	printf("Item [key: %s, value: %s]\n", removed->key, removed->value);


	return 0;
}
