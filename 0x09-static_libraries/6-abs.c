/**
 * _abs - Compute the absolute value of a number
 * @n: The integer whose absolute value is to be computed
 *
 * Description: Compute and return the absolute value of a given integer
 * Return: The unsigned value of the integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	{
		return (n);
	}
}
