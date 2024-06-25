#include "main.h"
/**
*print_alphabet - entry point
*
*Description: print alphabets in small charachters
*
*print_alphabet - utilizes on the _putchar function to print a - z
*
*Return:void (no return value)
*/
void print_alphabet(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
