#include <stdio.h>
#include "main.h"
/**
 * print_sign - function that prints number sign
 *@n:  charcter to be checked
 *Description: check sign of number  return 1 if + and 0 if n=0 else -1
 *
 * Return: 1 if 'n' is positive 0 if 'n' equal 0 else -1
*/

int print_sign(int n)
{
int n;
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
