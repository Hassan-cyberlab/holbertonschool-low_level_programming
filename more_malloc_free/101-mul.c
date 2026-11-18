#include "main.h"
#include <stdlib.h>

/**
 * str_len - gets the length of a string
 * @s: the string
 *
 * Return: the length
 */
int str_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * is_number - checks that a string is only made of digits
 * @s: the string
 *
 * Return: 1 if only digits, 0 if not
 */
int is_number(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * print_error - prints Error and exits with status 98
 *
 * Return: void
 */
void print_error(void)
{
	char *msg = "Error\n";
	int i = 0;

	while (msg[i] != '\0')
	{
		_putchar(msg[i]);
		i++;
	}
	exit(98);
}

/**
 * multiply - multiplies two numbers digit by digit
 * @n1: first number as a string
 * @n2: second number as a string
 * @len1: length of n1
 * @len2: length of n2
 *
 * Description: each digit goes in an int array like on paper
 * Return: array with the digits of the result
 */
int *multiply(char *n1, char *n2, int len1, int len2)
{
	int *res;
	int i;
	int j;
	int sum;
	int carry;

	res = malloc(sizeof(int) * (len1 + len2));
	if (res == NULL)
		print_error();
	for (i = 0; i < len1 + len2; i++)
		res[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (n1[i] - '0') * (n2[j] - '0') + res[i + j + 1] + carry;
			res[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		res[i] += carry;
	}
	return (res);
}

/**
 * print_result - prints the result without the leading zeros
 * @res: array of digits
 * @size: size of the array
 *
 * Return: void
 */
void print_result(int *res, int size)
{
	int i = 0;

	while (i < size - 1 && res[i] == 0)
		i++;
	while (i < size)
	{
		_putchar(res[i] + '0');
		i++;
	}
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: 0 on success, exits with 98 on error
 */
int main(int argc, char *argv[])
{
	int len1;
	int len2;
	int *res;

	if (argc != 3)
		print_error();
	if (!is_number(argv[1]) || !is_number(argv[2]))
		print_error();
	len1 = str_len(argv[1]);
	len2 = str_len(argv[2]);
	res = multiply(argv[1], argv[2], len1, len2);
	print_result(res, len1 + len2);
	free(res);
	return (0);
}
