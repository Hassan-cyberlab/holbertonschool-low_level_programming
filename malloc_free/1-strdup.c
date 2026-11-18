#include "main.h"
#include <stdlib.h>

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
* _strdup - Creating An Array
*
* @str: characters of the array
* Description: a funciton creates a an array based on size
* Return: an array
 */

char *_strdup(char *str)
{
	char *s;

	int sz = _strlen(str);

	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(sz);

	if (s == NULL)
	{
		return (NULL);
	}

	while (i < sz)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
