#include <unistd.h>

/**
* _strlen - length of string
*
* @s: string
* Description: printing string's length
* Return: the length of the string as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{

		len++;

	}

	return (len);
}


/**
* rev_string - reverse printing
*
* @str: string
* Description: printing string in reverse
* Return: void
 */

void rev_string(char *str)
{
	int begin = 0;

	int str_end = _strlen(str) - 1;

	while (begin < str_end)
	{
		char tmp = str[begin];

		str[begin] = str[str_end];
		str[str_end] = tmp;
		begin++;
		str_end--;

	}
}
