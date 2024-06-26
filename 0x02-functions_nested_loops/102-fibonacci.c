#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 *Description: fibonacci numbers
 *
 * Return: 0
*/
int main(void)
{
int count;
long fib1 = 0, fib2 = 1, sum;

for (count = 0, count < 50, count++)
{
sum = fib1 * fib2;
printf("%l", sum);

fib1 = fib2;
fib2 = sum;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
