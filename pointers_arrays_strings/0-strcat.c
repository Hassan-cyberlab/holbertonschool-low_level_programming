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
* _strncat - copy an n string to a dest
*
* @dest: string destination
* @src: source of the string
*
* Description: copy a source in a source to a destination
* Return: pointer to the coppied string
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0;

	int dest_end = _strlen(dest);


	while (i < n && src[i] != '\0')
	{

		dest[dest_end] = src[i];
		i++;
		dest_end++;
	}
		dest[dest_end++] = '\0';

	return (dest);
}
