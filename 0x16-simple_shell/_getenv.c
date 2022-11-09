#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern char **environ;

/**
 * check_match - Checks if the first string matches the first part of
 * the second string that comes before an '=' sign
 * @name: The first string which would be searched for
 * @env: The second string which has two parts seperated by '=' sign
 *
 * Return: The number of characters matched, or 0 if a match is not found
 */
int check_match(const char *name, char *env)
{
	int i = 0;

	while(name[i] != '\0')
	{
		if (name[i] != env[i])
			return (0);

		i++;
	}
	
	/*Confirm that next character is '=' sign to validate match*/
	if (env[i] == '=')
		return (i);

	return (0);
}

/**
 * _getenv - Returns the value of a named environment variable
 * @name: The name of the variable to search for
 *
 * Return: A pointer to the value (part after the '=' sign) of the 
 * environment variable if Found. (null) if not found
 */
char *_getenv(const char *name)
{
	int match, i = 0;
	char *temp, *nul = "(null)";

	while (environ[i] != NULL)
	{
		match = check_match(name, environ[i]);

		if (match > 0)
		{
			temp = environ[i];

			/*Move the pointer to the position after the '=' sign*/
			temp += match + 1;

			return (temp);
		}
		i++;
	}

	return (nul);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("PATH : %s\n", _getenv("PATH"));
	printf("PATH : %s\n", getenv("PATH"));
	printf("HOME : %s\n", _getenv("HOME"));
	printf("HOME : %s\n", getenv("HOME"));
	printf("ROOT : %s\n", _getenv("ROOT"));
	printf("ROOT : %s\n", getenv("ROOT"));

	return(0);
}
