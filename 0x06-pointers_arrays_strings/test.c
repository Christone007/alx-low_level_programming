#include <stdio.h>

/**
 * main - test my c programs
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char *ptr = "12345";

	i = 0;

	while (ptr[i] != '\0')
	{
		printf("The value: %c\n", ptr[i]);
		i++;
	}






	return (0);
}
