#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: The first number
 * @m: The second number
 * Return: number of the bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int z, countbit = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (z = 63; z >= 0; z--)
{
current = exclusive >> z;
if (current & 1)
countbit++;
}
return (countbit);
}
