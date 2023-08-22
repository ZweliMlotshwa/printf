#include "main.h"

/**
 * printf_bin - to prints a binary number.
 * @val: arguments.
 * Return: return 1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, l = 1, e;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((l << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			e = p >> (31 - i);
			_putchar(e + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
