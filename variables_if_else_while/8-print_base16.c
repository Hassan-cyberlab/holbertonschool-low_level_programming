#include <stdio.h>

/**
* main - random number
*
* description: this will create a random number everytime
* Return: the return value is 0
 */
int main(void)
{

	char begin = '0';

	char hexbegin = 'a';

	char newline = '\n';

	for (begin = '0'; begin <= '9' ; begin++)
	{
		putchar(begin);
	}

	for (hexbegin = 'a'; hexbegin <= 'f'; hexbegin++)
	{
		putchar(hexbegin);
	}

	putchar(newline);
	return (0);
}
