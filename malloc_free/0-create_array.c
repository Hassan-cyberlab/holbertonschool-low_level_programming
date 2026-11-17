#include "main.h"
#include <stdlib.h>

/**
* create_array - Creating An Array
* @size: size of the array
* @c: characters of the array
* Description: a funciton creates a an array based on size
* Return: an array
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}


	s = malloc(sizeof(*s) * size);

	if (s == NULL)
	{

		return (NULL);

	}


	while (i < size)
	{
		s[i] = c;
		i++;
	}


	return (s);
}
