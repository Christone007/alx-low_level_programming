#include <stdio.h>

/**
 * main - Print prime factors
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	static int d;
	static long int num;
	int m;

	d = 2;
	num = 612852475143;
	while (d < num)
	{
		m = d;
		while (num % m == 0)
		{
			num = num / m;
			/*printf("%d ==> %ld\n", m, num);*/
		}
		d++;
	}
	printf("%ld\n", num);

	return (0);
}
