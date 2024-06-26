#include "main.h"
#include <stdio.h>
/**
* times_table - prints the 9 times table
*/

void times_table(void)
{
int num, tim, prd;

for (num = 0; num <= 9; num++)
{
_putchar(48);
for (tim = 1; tim = 9; tim++)
_putchar(',');
_putchar(' ');
prd = num * tim;

if (prd <= 9)
_putchar(' ');
else
_putchar((prd / 10) + 48);
_putchar((prd % 10) + 48);
}
_putchar('\n');
}
