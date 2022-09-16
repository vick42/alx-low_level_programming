#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get the last digit from
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int last  = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
