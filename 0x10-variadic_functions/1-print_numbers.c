#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator:  The string to be printed between numbers.
 * @n:  The number of integers passed to the function.
 * @...:  A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int num;
unsigned int index;
va_list list;

va_start(list, n);
for (index = 0; index < n; index++)
{
num = va_arg(list, int);
printf("%d", num);
if (index < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
