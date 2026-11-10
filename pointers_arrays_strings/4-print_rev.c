#include <unistd.h>

/**
* _strlen - length of string
*
* @s: string
* Description: printing string's length
* Return: the length of the string as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{

		len++;

	}

	return (len);
}


/**
* print_rev - reverse printing
*
* @str: string
* Description: printing string in reverse
* Return: void
 */

void print_rev(char *str)
{
	int str_end = _strlen(str) - 1;

	while (str_end >= 0)
	{
		write(1, &str[str_end], 1);
		str_end--;

	}
	write(1, "\n", 1);
}
