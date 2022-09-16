#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get the last digit from
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	_putchar(a);

	return (a);
}
