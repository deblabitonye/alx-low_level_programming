#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that duplicates to new memory
 * space location
 * @str: initial string input
 * Return: 0
 */
char *_strdup(char *str)
{
int i, j = 0
char *aaa;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;

aaa = (char *)malloc(sizeof(char) * (i + 1));

if (aaa == NULL)
return (NULL);

For(j = 0; str[j]; j++)
aaa[j] = str[j];
return (aaa);
}
