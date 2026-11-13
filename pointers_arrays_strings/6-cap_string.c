#include "main.h"

/**
 * is_sep - checks if a character is a word separator
 * @c: character
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == ',' ||
		c == ';' || c == '.' || c == '!' || c == '?' ||
		c == '"' || c == '(' || c == ')' || c == '{' || c == '}');
}

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || is_sep(str[i - 1]))
				str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}

	return (str);
}
