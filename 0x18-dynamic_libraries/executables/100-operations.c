#include <stdio.h>

/* these are all the functions in one executable */
int add (int, int);
int sub(int, int);
int mul(int , int);
int div(int, int);
int mod(int, int);

/*
 * add - adds two numbers together
 * @a: first number
 * @b: second number
 * Return:  a + b
 */
int add(int a, int b)
{
	return (a+b);
}

/*
 * sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return:  a - b
 */
int sub(int a, int b)
{
	return (a-b);
}

/*
 * mul - multiply two numbers together
 * @a: first number
 * @b: second number
 * Return:  a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/*
 * div - divide two numbers together
 * @a: first number
 * @b: second number
 * Return:  a / b
 */
int div(int a, int b)
{
	return (a/b);
}

/*
 * mod - modulo of  two numbers
 * @a: first number
 * @b: second number
 * Return:  a % b
 */
int mod(int a, int b)
{
	return (a % b);
}
