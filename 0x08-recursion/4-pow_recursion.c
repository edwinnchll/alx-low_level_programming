#include "main.h"
/**
 * _pow_recursion- calculate the factorial of a number
 * @y: a number
 * @x: a number
 * Return: the power of a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
return x  * _pow_recursion(x, y-1);
}
