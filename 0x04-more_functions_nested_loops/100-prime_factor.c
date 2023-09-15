#include <stdio.h>
/**
 * main - function that finds and prints the largest
 * prime factor of the number 612852475143.
 * Return: 0 all the time
 */
int main(void)
{
long prime = 612852475143;
long divisor = 2;

while (divisor <= prime)
{
if (prime % divisor == 0)
{
prime /= divisor;
}
else
{
divisor++;
}
}

printf("%ld\n", prime);
return (0);
}
