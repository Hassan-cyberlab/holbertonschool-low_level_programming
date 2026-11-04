#include <stdio.h>

/**
* main - random number
*
* description: this will create a random number everytime
* Return: the return value is 0
 */
int main(void)
{
	int number_0 = 48;

	int number_9 = 57;

	int newline = 10;

	for (number_0 = 48; number_0 <= number_9 ; number_0++)
	{
		putchar(number_0);
	}


	putchar(newline);

	return (0);
}
