#include <unistd.h>
#include "main.h"

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
* puts2 - print skip
*
* @str: string
* Description: printing every other character
* Return: void
 */

void puts2(char *str)
{
	int i = 0;

	int len = _strlen(str);

	while (i < len)
	{
		write(1, &str[i], 1);

		i += 2;
	}
	write(1, "\n", 1);
}
