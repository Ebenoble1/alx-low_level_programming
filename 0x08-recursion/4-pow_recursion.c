#include "main.h"
#include <string.h>

/**
 *@x : parameter
 *@y : variable
 *Return: lenfth of s
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
else if (y != 0)
{
return (x * _pow_recursion(x, y - 1));
}
return (0);
}
