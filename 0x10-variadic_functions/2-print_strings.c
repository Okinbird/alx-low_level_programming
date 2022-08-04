#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator:  The string to be printed between strings.
 * @n:  The number of strings passed to the function.
 * @...:  A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings is NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int index;
va_list list;

va_start(list, n);

for (index = 0; index < n; index++)
{
str = va_arg(list, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (index < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");

va_end(list);
}
