#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints time table of n
 *
 *@n: takes number input
*/

void print_times_table(int n)
{
int pr, num, tim;

if (n <= 15 && n >=0)
{
for (num = 0; num <= n; num++)
{
_putchar(48);
for (tim = 1; tim <= n; tim++)
{
_putchar(',');
_putchar(' ');
pr = num * tim;

if (pr <= 9)
_putchar(' ');
if (pr <=99)
_putchar(' ');

if (pr >=100)
{
_putchar((pr / 100) + 48);
_putchar((pr /10) % 10 + 48);
}
else if (pr <=99 && pr >=10)
_putchar((pr / 10) + 48);
_putchar((pr % 10) + 48);
}
 _putchar('\n');
}
}
}
