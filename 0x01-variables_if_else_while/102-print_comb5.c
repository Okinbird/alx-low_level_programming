#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a, b, c1, c2, c3, c4;
for (a = 0; a <= 98; a++)
{
for (b = a + 1; b <= 99; b++)
{
c1 = a / 10;
c2 = a % 10;
putchar(c1 + '0');
putchar(c2 + '0');
putchar(' ');
c3 = b / 10;
c4 = b % 10;
putchar(c3 + '0');
putchar(c4 + '0');
if (a != 98 || b != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
