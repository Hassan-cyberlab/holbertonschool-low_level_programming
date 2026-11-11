#include <string.h>
#include "main.h"

/**
* _strcat - copy a string to a dest
*
* @dest: string destination
* @src: source of the string
*
* Description: copy a source in a source to a destination
* Return: pointer to the coppied string
 */

char *_strcat(char *dest, char *src)
{

	int i = 0;

	int dest_end = strlen(dest);

	while (src[i] != '\0')
	{

		dest[dest_end] = src[i];
		i++;
		dest_end++;
	}
		dest[dest_end++] = '\0';

	return (dest);
}
