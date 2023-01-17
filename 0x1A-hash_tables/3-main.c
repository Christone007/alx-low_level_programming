#include "hash_tables.h"
#include <stdio.h>


int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);

	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "emy", "host");
	hash_table_set(ht, "hetairas", "Emeka");
	hash_table_set(ht, "heliotropes", "Salome");
	hash_table_set(ht, "depravement", "Nonye");
	hash_table_set(ht, "stylist", "Ogechi");
	hash_table_set(ht, "joyful", "Ifesinachi");
	hash_table_set(ht, "redescribed", "Ifeanyi");
	hash_table_set(ht, "dram", "Ikechuckwu");
	hash_table_set(ht, "envy", "Chidera");
	hash_table_set(ht, "hate", "Mum");
	hash_table_set(ht, "jealousy", "Dad");

	print_hash_table(ht);

	hash_table_set(ht, "hate", "Nobody");

	print_hash_table(ht);

	hash_table_set(ht, "emy", "LOVE");
	hash_table_set(ht, "mentioner", "LIFE");

	print_hash_table(ht);

	hash_table_set(ht, "mentioner", "LIFE IS GOOD");

	print_hash_table(ht);
	return (EXIT_SUCCESS);
}
