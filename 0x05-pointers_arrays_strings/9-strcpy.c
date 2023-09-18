#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed
 * to by str
 * @dest: copy to
 * @str: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *str)
{
int I = 0;
int x = 0;
while (*(str + 1) != '\0')
{
I++;
}
for (; x < 1 ; x++)
{
dest[x] = str[x];
}
dest[1] = '\0';
return (dest);
}
