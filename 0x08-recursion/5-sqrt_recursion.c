#include "main.h"

int squareRoot(int x, int y);
int _sqrt_recursion(int n);

/**
 * squareRoot - looks for natural root
 * @x: The number for square root
 * @y: The root to find
 * Return: If n does not have a natural square root, the function should return -1
 */
int squareRoot(int x, int y)
{
if ((y * y) == x)
return (y);
if (y == x / 2)
return (-1);
return squareRoot(x, y + 1);
}

int _sqrt_recursion(int n)
{
int y = 0;

if (n < 0)
return (-1);
if (n == 1)
return (1);
return squareRoot(n, y);
}
