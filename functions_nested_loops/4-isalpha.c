#include "main.h"

/**
 * _isalpha - Checks for an alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter, 0 if it's not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
