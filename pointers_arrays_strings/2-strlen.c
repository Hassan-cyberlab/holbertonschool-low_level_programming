#include <stdio.h>
#include "main.h"

/**
* _strlen - Finding Length of a String
*
* @str: string to be passed
*
* Description: Finding the length of a string
* Return: the length of the string in int
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);

}

