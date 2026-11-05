#include "main.h"

/**
* print_alphabet_x10 - printing alphabets
*
* Description: this will print alphabets in lower case
*
* Return: void
*
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

}
