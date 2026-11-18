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
* str_concat - Creating An Array
*
* @s1: first string
* @s2: second string
* Description: concantenates two strings
* Return: returns a pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;

	int sz1;

	int sz2;

	int i = 0;

	int j = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	sz1 = _strlen(s1);

	sz2 = _strlen(s2);

	s = malloc(((sz1 + sz2) + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	while (i < sz1)
	{
		s[i] = s1[i];
		i++;
	}

	while (j < sz2)
	{
		s[sz1 + j] = s2[j];
		j++;
	}

	return (s);
}
