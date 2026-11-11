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

	int len = strlen(src);

	memcpy(dest, src, len + 1);

	return (dest);
}
