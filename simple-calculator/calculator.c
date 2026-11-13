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
		printf("Choice: %d\n", choice);
		if (choice == 0)
			printf("Bye!\n");
		else if (choice < 1 || choice > 4)
			printf("Invalid choice\n");
		else
		{
			printf("A: ");
			scanf("%i", &num1);
			printf("B: ");
			scanf("%i", &num2);
			switch (choice)
			{
			case 1:
				printf("Result: %i\n", sum(num1, num2));
				break;
			case 2:
				printf("Result: %i\n", sub(num1, num2));
				break;
			case 3:
				printf("Result: %i\n", mul(num1, num2));
				break;
			default:
				printf("Result: %i\n", divide(num1, num2));
			}
		}
	}
	return (0);
}
