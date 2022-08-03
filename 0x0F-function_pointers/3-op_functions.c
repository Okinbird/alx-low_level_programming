#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Subtracts b from a
 * @a: First number
 * @b: Second number
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplies a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Multiplication of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Divides a by b
 * @a: First number
 * @b: Second number
 *
 * Return: Integer division of a by b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Find the remainder of the division of a by b
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of the division of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
