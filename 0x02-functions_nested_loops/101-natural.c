#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 *Description: compute sum of mult 3 & 5
 *
 * Return: 0
*/
int main(void)
{
int sum, num;
for (num = 0; num < 1024; num++)
{
if ((num % 3 == 0) || (num % 5 == 0))
sum += num;
}
printf("%d\n", sum);
return (0);
}
