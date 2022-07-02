#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
int b;
int c;
for (c = '0'; c <= '7'; c++)
{
for (a = c + 1; a <= '8'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
putchar(c);
putchar(a);
putchar(b);
if (b < '9' || a < '8' || c < '7')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);		    
}
