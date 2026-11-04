#include <stdio.h>

/**
 * main - Prints all different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;
	int comma = 44;
	int newline = 10;
	int space = 32;

	for (first = 48; first <= 56; first++)
	{
		for (second = first + 1; second <= 57; second++)
		{
			putchar(first);
			putchar(second);
			if (first != 56 || second != 57)
			{
				putchar(comma);
				putchar(space);
			}
		}
	}
	putchar(newline);
	return (0);
}
