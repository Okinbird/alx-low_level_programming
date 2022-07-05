#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

srand(time(0));
i = rand() - RAND_MAX / 2;
if (i > 0)
{
printf("%d is positive\n", i);
}
else
{
if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
return (0);
}
