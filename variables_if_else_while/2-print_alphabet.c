#include <stdio.h>

/**
* main - random number
*
* description: this will create a random number everytime
* Return: the return value is 0
 */
int main(void)
{
	int a = 97;

	int end = 122;

	int newline = 10;

	for ( ; a <= end ; a++)
	{
		putchar(a);
	}
	putchar(newline);
	return (0);
}
