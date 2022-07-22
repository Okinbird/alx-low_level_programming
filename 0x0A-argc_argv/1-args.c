#include <stdio.h>

/**
 * main - Prints the name number of arguments passed to it
 * @argc: Number of arguments passed to the function
 * @argv: Argument vector of pointers to strings
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
