#include "main.h"

/**
 * sqrt_check - Checks for the square root of j
 * @i: guess at sqrt
 * @j: number to find sqrt of
 *
 * Return: -1 or sqrt of j
 */
int sqrt_check(int i, int j)
{
if (i * i == j)
return (i);
if (i * i > j)
return (-1);
return (sqrt_check(i + 1, j));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_check(1, n));
}
