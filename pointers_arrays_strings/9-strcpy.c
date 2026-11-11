#include <string.h>
#include "main.h"

/**
* _strcpy - copy a string to a dest
*
* @dest: string destination
* @src: source of the string
*
* Description: copy a source in a source to a destination
* Return: pointer to the coppied string
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0;

	while (src[i] != '\0')
	{

		dest[i] = src[i];
		i++;

	}
		dest[i] = '\0';

	return (dest);
}
