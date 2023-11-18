#include "main.h"

/**
 * c_print - main func
 * @list: the format string
 * Return: 0
 */

int c_print (va_list list)
{
	char str;

	str = va_arg(list, int);
	putchar(str);
	return (1);
}
