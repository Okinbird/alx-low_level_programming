#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of integers.
 * @a:  Pointer to start of matrix
 * @size: Width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, j;
int p;
int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
p = (i * size) + i;
sum1 += *(a + p);
}
for (j = 0; j < size; j++)
{
p = (j * size) + (size - 1 - j);
sum2 += *(a + p);
}
printf("%i, %i\n", sum1, sum2);
}
