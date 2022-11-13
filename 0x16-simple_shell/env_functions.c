#include "main.h"

/**
 * get_match_index - gets the index of the match that was found
 * @name: The name of the environment variable to match
 *
 * Return: The index of the matched variable, -1 if no match
 */
int get_match_index(const char *name)
{
	int match, i = 0;

	while (environ[i] != NULL)
	{
		match = check_match(name, environ[i]);

		if (match > 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
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
	char *temp;

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

	return (NULL);
}


/**
 * _printenv - prints all the elements of the environment variable
 *
 * Return: Nothing
 */
void _printenv(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
	
	return;
}


/**
 * _setenv - Changes or adds a variable to the environment
 * @name: The name of the environment variable to set
 * @value: The value of the environment variable to set
 * @overwrite: 1 (overwrite if exists), 0 (do not overwrite if exists)
 *
 * Return: 0 (success), -1 (error)
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	char *new_env_string, **new_environ;
	int matched_index, i = 0;

	/*concatenate name & value with an = between*/
	new_env_string = str_concat_char(name, '=', value);

	if (_getenv(name) != NULL)
	{
		if (_getenv(name) == value)
		{
			return (0);
		}
		else
		{
			if (overwrite)
			{
				/*code to change value to new one*/

				/*replace string at matched index*/
				matched_index = get_match_index(name);
				/*Replace what is stored there with the new string*/
				environ[matched_index] = new_env_string;

				return (0);
			}
		}
	}

	else
	{
		/*code to create and add new variable*/

		/*get index of NULL in env*/
		/*Create an array that is +1 in size*/
		new_environ = malloc(sizeof(char *) * (array_size(environ) + 1));
		if(new_environ == NULL)
		{
			printf("malloc error for new_environ\n");
			return (-1);
		}

		/*copy all values from environ to new_environ*/
		while (environ[i] != NULL)
		{
			new_environ[i] = environ[i];
			i++;
		}

		/*Set penultimate element to new string*/
		new_environ[i] = new_env_string;
		i++;
		/*set last element to NULL*/
		new_environ[i] = NULL;
		/*set environ to point to new_environ*/
		environ = new_environ;
		/*set new_environ as NULL*/
		new_environ = NULL;

		return (0);
	}

	return (-1);
}
