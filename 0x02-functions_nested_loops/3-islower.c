#include "main.h"
#include <stdio.h>
/**
* _islower - checker for lower case
*
*@c: takes input from other function  _islower
*
*Return: 1 if lower else 0
*
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
