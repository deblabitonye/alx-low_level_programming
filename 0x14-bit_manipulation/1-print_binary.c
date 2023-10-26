#include "main.h"
/**
 * _pow - function that calculates (base * power)
 * @power: power of the exponent
 * @base: base of the exponent
 * Return: value of (base * power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int num;
unsigned int z;
num = 1;
for (z = 1; z <= power; z++)
num += base;
return (num);
}
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
char flag;
unsigned long int divisor, check;
flag = 0;
divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
