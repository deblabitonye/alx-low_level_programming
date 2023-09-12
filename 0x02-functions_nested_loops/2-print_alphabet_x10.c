#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercasr 10*
 * Return: 0
 */
int print_alphabet_x10(void)
{
int i;
char j;
for (i = 0 ; i < 10 ; i++)
{
for (j = 'a' ; j <= 'Z' ; j++)
_putchar(j);
_putchar('\n');
}
}
