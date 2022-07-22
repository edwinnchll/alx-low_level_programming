#include "main.h"

int is_prime_number(int n);
int canBeDivided(int number, int divider);

/**
 * canBeDivided - Checks if a number is divisible.
 * @number: The number to check
 * @divider: The divisor
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int canBeDivided(int number, int divider)
{

if (number % divider == 0)
return (0);

if (divider == number / 2)
return (1);

return (canBeDivided(number, divider + 1));
}

/**
 * is_prime_number - Function for prime
 * @n: Number for prime or not
 * Return: 0 if not, and 1 if its prime
 */

int is_prime_number(int n)
{
int num2 = 2;

if (n <= 1)
return (0);
if (n >= 2 && n <= 3)
return (1);
return (canBeDivided(n, num2));
}
