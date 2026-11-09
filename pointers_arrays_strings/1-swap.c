#include "main.h"

/**
* swap_int - this will modify the value pointed by valueptr to 98
* @a: is the first value
* @b: is the second value
*
* Description: swap values
*
* Return: void
*
 */

void swap_int(int *a, int *b)
{
	int value_a = *a;
	int value_b = *b;
	*a = value_b;
	*b = value_a;
}
