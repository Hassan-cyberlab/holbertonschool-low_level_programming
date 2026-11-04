#include <stdio.h>

/**
* main - random number
*
* description: this will create a random number everytime
* Return: the return value is 0
 */
int main(void)
{
	int begin;

	int comma = 44;

	int newline = 10;

	int space = 32;

	for (begin = 48; begin <= 57; begin++)
		{
			putchar(begin);
			putchar(comma);
			putchar(space);
		}
	putchar(newline);
	return (0);
}
