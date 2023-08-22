#include "main.h"

/**
 * printf_char - to prints a char.
 * @val: an arguments.
 * Return: return 1.
 */

int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
