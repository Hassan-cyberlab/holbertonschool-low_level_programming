#include <stdio.h>

/**
* main - random number
*
* description: this will create a random number everytime
* Return: the return value is 0
 */
int main(void)
{
	int low_a = 97;

	int low_z = 122;

	int cap_a = 65;

	int cap_z = 90;

	int newline = 10;

	for ( ; low_a <= low_z ; low_a++)
	{
		putchar(low_a);
	}


	for ( ; cap_a <= cap_z ; cap_a++)
	{
		putchar(cap_a);
	}

	putchar(newline);

	return (0);
}
