#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Addition
 * @a: first number.
 * @b: second number.
 *
 * Return: answer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction
 * @a: first number.
 * @b: second number.
 *
 * Return: Answer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication
 * @a: first number.
 * @b: second number.
 *
 * Return: Answer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: first number.
 * @b: second number.
 *
 * Return: Answer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulos
 * @a: first number.
 * @b: second number.
 *
 * Return: Answer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
