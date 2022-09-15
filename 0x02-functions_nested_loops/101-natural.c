#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Description: Print sum of multiples of
 *  3 and 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	static int sum;

	i = 1;
	sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		i++;
	}
	printf("%d\n", sum);
}
