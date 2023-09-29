#include "main.h"
/**
 * _isupper - check if a characteris an uppercase letter
 * @c: char to check
 *
 * Return: if uppercase return 1, else return 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
