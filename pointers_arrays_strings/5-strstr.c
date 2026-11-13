#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to start of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}

	if (needle[0] == '\0')
		return (haystack + i);

	return (0);
}
