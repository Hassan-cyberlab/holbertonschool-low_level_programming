#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, col, n;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			n = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (n < 10)
					_putchar(' ');
			}
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
