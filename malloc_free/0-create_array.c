#include "main.h"
#include <stdlib.h>

/**
* create_array - Creating An Array
* @unsigned int: size
* @char: characters
* Description: a funciton creates a an array based on size
* Return: an array
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int i = 0;

	if(size == 0)
	{
		return NULL;
	}


	s = malloc(sizeof(c) * size);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	if(s == NULL)
	{

		return (NULL);

	}

	return s;
}
