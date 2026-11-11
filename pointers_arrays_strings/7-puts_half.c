#include <unistd.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * half - prints a string starting from its middle
 * @str: the string to print
 *
 * Description: if the length is odd, printing starts one character later
 */
void half(char *str)
{
	int len = _strlen(str);
	int i = len / 2;

	if (len % 2 == 1)
		i++;

	while (i < len)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
