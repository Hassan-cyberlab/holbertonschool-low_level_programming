#include "main.h"

/**
* print_alphabet - printing alphabets
*
* Description: this will print alphabets in lower case
*
* Return: void
*
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
