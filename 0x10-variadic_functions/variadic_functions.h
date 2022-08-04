#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct print - Print type defining a printer
 * @t: The data type
 * @f: The print function
 */
typedef struct print
{
char *t;
void (*f)(va_list);
} print_t

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_str(va_list list);

#endif
