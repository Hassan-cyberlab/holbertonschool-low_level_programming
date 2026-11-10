#include <unistd.h>
#include "main.h"

/**
* puts2 - print skip
*
* @str: string
* Description: printing every other character
* Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i + 1] != '\0')
	{
		write(1, &str[i], 1);
		i += 2;
	}
	write(1, "\n", 1);
}
