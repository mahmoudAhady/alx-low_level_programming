#include <unistd.h>

/**
*main - entry point
*description: write a quote
*
*Return: 1 (fail)
*/

int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(1, quo, 59);
return (1);
}
