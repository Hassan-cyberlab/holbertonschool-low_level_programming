#include "main.h"
#include <stdlib.h>

/**
 * _realloc - changes the size of a memory block
 * @ptr: the old memory block
 * @old_size: size of the old block
 * @new_size: size we want for the new block
 *
 * Description: makes a new block, copies the old content into it and
 * frees the old block
 * Return: the new block, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *old;
	unsigned int i = 0;
	unsigned int copy;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	old = ptr;
	copy = old_size;
	if (new_size < old_size)
		copy = new_size;
	while (i < copy)
	{
		new[i] = old[i];
		i++;
	}
	free(ptr);
	return (new);
}
