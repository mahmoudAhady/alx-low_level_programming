#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print last digit of a number
 *@n: integer for lastDigit
 *0n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
int lastDigit;

if (n < 0)
lastDigit = (n % 10) * -1;
else
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
