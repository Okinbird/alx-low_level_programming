#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Print a char
 * @list: List of char to print
 */
void print_char(va_list list)
{
printf("%c", va_arg(list, int));
}

/**
 * print_int - Print an int
 * @list: List of int to print
 */
void print_int(va_list list)
{
printf("%d", va_arg(list, int));
}

/**
 * print_float - Print a float
 * @list: List of float to print
 */
void print_float(va_list list)
{
printf("%f", va_arg(list, double));
}

/**
 * print_str - Print a string
 * @list:  List of string to print
 */
void print_str(va_list list)
{
char *str;
str = va_arg(list, char *);

if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
 * print_all - Prints anything, followed by a new line
 * @format:  a string of characters representing the argument types
 * @...:  A variable number of arguments to be printed
 *
 * Description:  Any argument not of type char, int, float,
 *               or char * is ignored
 *               If a string argument is NULL, (nil) is printed instead
 */
void print_all(const char * const format, ...)
{
int i = 0, j = 0;
print_t p[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_str},
{NULL, NULL}
};
va_list list;
char *separator = "";

va_start(list, format);
i = 0;
while (format && format[i])
{
j = 0;
while (p[j].t != NULL)
{
if (*(p[j].t) == format[i])
{
printf("%s", separator);
p[j].f(list);
separator = ", ";
break;
}
j++;
}
i++;
}
va_end(list);
printf("\n");
}
