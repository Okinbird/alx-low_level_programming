#include "main.h"
#include <stdlib.h>

/**
 * _print - Moves a string one place to the left and prints the string
 * @str:  The string to move
 * @l:  The size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
int i, j;
i= j = 0;
while (i < l)
{
if (str[i] != '0')
j = 1;
if (j || i == l - 1)
_putchar(str[i]);
i++;
}
_putchar('\n');
free(str);
}

  
/**
 * mul - Multiplies a char with a string and places the answer into dest
 * @n:  The char to multiply
 * @num:  The string to multiply
 * @num_index:  The last non NULL index of num
 * @dest: Destination of multiplication
 * @dest_index:  The highest index to start addition
 *
 * Return: A pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
int j, k, mul, mulrem, add, addrem;
mulrem = addrem = 0;
for (j = num_index, k = dest_index; j >= 0; j--, k--)
{
mul = (n - '0') * (num[j] - '0') + mulrem;
mulrem = mul / 10;
add = (dest[k] - '0') + (mul % 10) + addrem;
addrem = add / 10;
dest[k] = add % 10 + '0';
}
for (addrem += mulrem; k >= 0 && addrem; k--)
{
add = (dest[k] - '0') + addrem;
addrem = add / 10;
dest[k] = add % 10 + '0';
}
if (addrem)
{
return (NULL);
}
return (dest);
}

/**
 * check_for_digits - Checks the arguments to ensure they are digits
 * @av: A pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
int i, j;
for (i = 1; i < 3; i++)
{
for (j = 0; av[i][j]; j++)
{
if (av[i][j] < '0' || av[i][j] > '9')
return (1);
}
}
return (0);
}

/**
 * init - Initializes a string
 * @str:  The string to intialize
 * @l:  The length of string
 *
 * Return: void
 */
void init(char *str, int l)
{
int i;
for (i = 0; i < l; i++)
str[i] = '0';
str[i] = '\0';
}

/**
 * main - Multiply two positive numbers
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments
 *
 * Description: If the number of arguments is incorrect or one number 
 *              contains non-digit, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int l1, l2, ln, ti, i;
char *a;
char *t;
char e[] = "Error\n";
if (argc != 3 || check_for_digits(argv))
{
for (ti = 0; e[ti]; ti++)
_putchar(e[ti]);
exit(98);
}
for (l1 = 0; argv[1][l1]; l1++)
;
for (l2 = 0; argv[2][l2]; l2++)
;
ln = l1 + l2 + 1;
a = malloc(ln * sizeof(char));
if (a == NULL)
{
for (ti = 0; e[ti]; ti++)
_putchar(e[ti]);
exit(98);
}
init(a, ln - 1);
for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
{
t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
if (t == NULL)
{
for (ti = 0; e[ti]; ti++)
_putchar(e[ti]);
free(a);
exit(98);
}
}
_print(a, ln - 1);
return (0);
}
