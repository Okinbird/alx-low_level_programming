/*
 * File: 3-puts.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * _puts - Prints a string to stdout,
 *        followed by a new line.
 * @str: The string to be printed.
 */

void _puts(char *s)
{

  while (*s)
    _putchar(*s++);

  _putchar('\n');

}
