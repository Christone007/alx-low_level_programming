#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pt1, *pt2;

	pt1 = malloc(12);

	printf("Address of pt1: %p\n", pt1);

	pt2 = realloc(pt1, 8);
	printf("Address of pt2: %p\n", pt2);

	return 0;
}
