#include <stdio.h>

/**
 *
 *
 *
 *
 */
int main(void)
{
	char *s1 = "";
	int *s2 = NULL;

	printf("The address s1 points to: %p\n", s1);
	printf("The address s2 points to: %p\n", s2);
	printf("The size of *s1: %lu\n", sizeof(*s1));
	printf("The size of *s2: %lu\n", sizeof(*s2));
	printf("Value in *s1 is %c\n", *s1);
	printf("Value in *s2 is %d\n", *s2);
	return (0);
}
