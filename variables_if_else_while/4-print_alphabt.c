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

	int newline = 10;

	for ( ; low_a <= low_z ; low_a++)
	{
		if (low_a == 113 || low_a == 101)
		{
		continue;
		}
		putchar(low_a);
	}


	putchar(newline);

	return (0);
}
