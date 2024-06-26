#include <stdio.h>
#include "main.h"
/**
* _isalpha - function that checks alphabets
*@c: character to be checked
*Description: a function that checks the alphabets
*
* Return: 1 if c is true else 0
*/

int _isalpha(int c)
{
int c;
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
