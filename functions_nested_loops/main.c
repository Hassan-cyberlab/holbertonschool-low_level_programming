#include <unistd.h>
#include "2-print_alphabet_x10.c"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{

	print_alphabet_x10();
	return (0);

}
