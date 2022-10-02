#include "main.h"

/**
 * main - Prints number of coins to make change for an amount of money
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Description: The fucntion divides the given amount of money into
 * smaller denominations (coins) ensuring that the minimum number of
 * coins is used
 *
 * Return: 0 Success, 1 error
 */
int main(int argc, char *argv[])
{
	int cents, coins, i;
	char denominations[] = {25, 10, 5, 2, 1};

	cents = coins = i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (cents != 0)
	{
		while (cents >= denominations[i])
		{
			cents -= denominations[i];
			coins++;
		}
		i++;
	}
	printf("%d\n", coins);

	return (0);
}
