/**
 * _isalpha - Checks if a character is a letter
 * @c: The letter to be checked
 *
 * Return: 1 if True, 0 if false.
 */
int _isalpha(int c)
{
	char n = c;

	if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
