#include "main.h"
#include <stdio.h>
/**
* jack_bauer - print every minute of the day
*/

void jack_bauer(void)
{
int hr, min;

for (hr = 0; hr <= 23; hr++)
{
for (min = 0; min <= 59; min++)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar ('\n');
}
}
}
