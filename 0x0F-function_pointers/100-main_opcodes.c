#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of this program
 * @a: Address of the main function
 * @n: The number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
int index;
for (index = 0; index < n; index++)
{
printf("%.2hhx", a[index]);
if (index < n - 1)
printf(" ");
}
printf("\n");
}

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int n;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, n);
return (0);
}
