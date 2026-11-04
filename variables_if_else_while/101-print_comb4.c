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
	int third;
	int comma = 44;
	int newline = 10;
	int space = 32;

	for (first = 48; first <= 56; first++)
	{
		for (second = first + 1; second <= 57; second++)
		{
			for(third = second +1; third <= 57; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first != '7' || second != '8' || third != '9')
				{
					putchar(comma);
					putchar(space);
				}
			}
		}
	}
	putchar(newline);
	return (0);
}
