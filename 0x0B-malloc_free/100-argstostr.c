#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 *             Each argument should be followed by a new line.
 * @ac:  The number of arguments passed to the program
 * @av:  An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL
 *         Otherwise -  A pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k = 0, n = 0;
if (ac <= 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
n++;
n++;
}
n++;
str = malloc(n *sizeof(char));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
