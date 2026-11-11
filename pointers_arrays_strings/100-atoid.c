#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Description: handles any number of '-' and '+' signs before the number.
 * The result is built as a negative value so that the lowest int does
 * not overflow.
 * Return: the converted integer, or 0 if there are no numbers
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int found = 0;
	int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 - (s[i] - '0');
			found = 1;
		}
		else if (found)
			break;
		i++;
	}

	if (sign == 1)
		return (-result);

	return (result);
}
