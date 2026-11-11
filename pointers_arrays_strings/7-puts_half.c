#include "main.h"
#include <unistd.h>
/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: the string to print
 *
 * Description: if the length is odd, prints the last (length + 1) / 2
 * characters
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	for (i = (len + 1) / 2; i < len; i++)
		write(1, &str[i], 1);

	write(1, "\n", 1);
}
