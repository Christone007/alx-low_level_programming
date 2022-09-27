#include <stdio.h>

/**
 * main - test my c programs
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 123;
	int *pt1;
	int **pt2;

	pt1 = &num;
	pt2 = &pt1;

	printf("\n Address of num is: %p", &num);
	printf("\n Address of num using pt1 is: %p", pt1);
	printf("\n Address if num using pt2 is: %p", *pt2);

	printf("\n Value of num is: %d", num);
	printf("\n Value of num using pt1 is: %d", *pt1);
	printf("\n Value of num using pt2 is: %d", **pt2);

	return (0);
}
