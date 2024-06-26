#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from 0 to 98
 *
 *Description: numbers till 98 seperated by commas
 *
 * @n: input
 * Return: 0 success
*/

void print_to_98(int n)
{
int count;

if (n > 98)
for (count = n; count > 98; count--)
printf("%d, ", count);
else
for (count = n; count < 98; count++)
printf("%d, ", count);
printf("98\n");
}
