#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all
 * the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int i, g, h = 0, I = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (g = 0; av[i][g]; g++)
I++;
}
I += ac;
str = malloc(sizeof(char) * I + 1);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (g = 0; av[i][g]; g++)
{
str[h] = av[i][g];
h++;
}
if (str[h] == '\0')
{
str[h++] = '\n';
}
}
return (str);
}
