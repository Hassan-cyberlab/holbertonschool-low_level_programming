#include <stdio.h>

/**
 * sum - adds two integers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of a and b
 */
int sum(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first number
 * @b: second number
 *
 * Return: the product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * divide - divides two integers
 * @a: dividend
 * @b: divisor
 *
 * Return: the quotient of a and b, or -1 if b is 0
 */
int divide(int a, int b)
{
	if (b == 0)
	{
		printf("Division by zero is invalid\n");
		return (-1);
	}
	return (a / b);
}

/**
 * main - simple calculator, shows the menu until the user quits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice = -1, num1, num2;

	while (choice != 0)
	{
		printf("\nSimple Calculator\n1) Add\n2) Subtract\n3) Multiply\n"
			"4) Divide\n0) Quit\n");
		if (scanf("%d", &choice) != 1)
			break;
		switch (choice)
		{
		case 0:
			printf("Choice: %d\nBye!\n", choice);
			break;
		case 1:
			printf("Choice: %d\nA: ", choice);
			scanf("%i", &num1);
			printf("B: ");
			scanf("%i", &num2);
			printf("Result: %i\n", sum(num1, num2));
			break;
		case 2:
			printf("Choice: %d\nChoose 2 numbers to subtract them\n", choice);
			scanf("%i %i", &num1, &num2);
			printf("Result is %i\n", sub(num1, num2));
			break;
		case 3:
			printf("Choice: %d\nChoose 2 numbers to multiply them\n", choice);
			scanf("%i %i", &num1, &num2);
			printf("Result is %i\n", mul(num1, num2));
			break;
		case 4:
			printf("Choice: %d\nChoose 2 numbers to divide them\n", choice);
			scanf("%i %i", &num1, &num2);
			printf("Result is %i\n", divide(num1, num2));
			break;
		default:
			printf("Invalid choice\n");
		}
	}
	return (0);
}
