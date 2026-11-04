#include <unistd.h>

/**
 * main - Writes a quote to standard error
 *
 * Return: Always 1
 */
int main(void)
{
	char a[] = "and that piece of art is useful\"";
	char b[] = " - Dora Korpar, 2015-10-19\n";

	write(2, a, sizeof(a) - 1);
	write(2, b, sizeof(b) - 1);
	return (1);
}
