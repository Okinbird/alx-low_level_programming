/*
 * File: 1-isdigit.c
 * Auth: Eyebiokin Olayinka
 */

#include "main.h"

/**
 * _isdigit - Checks for a digit (0-9).
 * @c: The integer to be checked.
 *
 * Return: 1 if the integer is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
