#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n:  The number of parameters passed to the function.
 * @...:  A variable number of parameters to calculate the sum of.
 * 
 * Return: If n == 0 - 0.
 *         Otherwise - The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int index;
va_list list;

va_start(list, n);

for (index = 0; index < n; index++)
sum += va_arg(list, int);

va_end(list);

return (sum);
}
