#include "dog.h"
#include <stdlib.h>

/**
 * str_dup - makes a copy of a string in new memory
 * @s: the string to copy
 *
 * Return: pointer to the copy, or NULL if malloc fails
 */
static char *str_dup(char *s)
{
	char *copy;
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
		len++;
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: stores a copy of name and owner
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = str_dup(name);
	d->owner = str_dup(owner);
	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
