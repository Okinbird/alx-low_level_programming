#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char string[] = "abcdfghijklmnoprstuvwxyz";
int n;
for (n = 0; n < 24; n++)
{
putchar(string[n]);
}
putchar('\n');
return (0);
}
