#include <stdio.h>
/**
* main - This where the magic begins
*
* Description: this will print the size of various types
* Return: This will return 0
 */
int main(void)
{
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %u byte(s)\n", sizeof(long));
printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
