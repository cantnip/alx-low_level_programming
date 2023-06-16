#include <stdio.h>

/**
 * main - A program that print a line using the print f function
 * Return: 0 (success)
 */

int main(void)
{
printf("size of a char: %lu byte(s)\n", sizeof(char));
printf("size of an int: %lu byte(s)\n", sizeof(int));
printf("size of a long int: %lu bytes(s)\n", sizeof(long int));
printf("size of long long int: %lu bytes(s)\n", sizeof(long long int));
printf("size of float: %lu bytes(s)\n", sizeof(float));
return (0);
}
