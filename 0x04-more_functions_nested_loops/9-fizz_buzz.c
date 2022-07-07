/*
 * File: 9-fizz_buzz.c
 * Auth: Eyebiokin Olayinka
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 1-100,
 *        followed by a new line. But for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz is printed, and for multiples of both three and five, 
 *        FizzBuzz is printed.
 *
 * Return: Always 0.
 */

int main(void)
{
int num;

for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
printf("FizzBuzz");

else if ((num % 3) == 0)
printf("Fizz");

else if ((num % 5) == 0)
printf("Buzz");

else
printf("%d", num);

if (num == 100)
continue;
printf(" ");
}
printf("\n");

return (0);
}
