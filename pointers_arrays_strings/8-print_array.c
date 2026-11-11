#include <stdio.h>
#include <string.h>
/**
* print_array - print array
*
* @a: the array argument
* @n: number of iterations
*
* Description: printing the elements of an array
* Return: no return value
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%i", a[i]);

		if( i < n -1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
