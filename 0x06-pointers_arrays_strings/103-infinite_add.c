#include "main.h"


/**
 * infinite_add - Adds two numbers.
 * @n1:  The first number to be added.
 * @n2:  The second number to be added.
 * @r:   The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i;
int j;
int k;
int l;
int m = 0;
int n = 0;
for (i = 0; n1[i]; i++)
;
for (j = 0; n2[j]; j++)
;

if (i > size_r || j > size_r)
return (0);

for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
{
n = m;
if (i >= 0)
n += n1[i] - '0';

if (j >= 0)
n += n2[j] - '0';
if (i < 0 && j < 0 && n == 0)
{
break;
}
m = n / 10;
r[k] = n % 10 + '0';
}
r[k] = '\0';
if (i >= 0 || j >= 0 || m)
return (0);
for (k -= 1, l = 0; l < k; k--, l++)
{
m = r[k];
r[k] = r[l];
r[l] = m;
}
return (r);
}
