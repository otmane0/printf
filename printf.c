#include "main.h"

/**
 * _printf - main func
 * @format: the format string
 * Return: 0
 */

int _printf(const char *format, ...)
{
	the_main funcs[] = {
		{"%c", c_print}, {"%s", s_print}, {"%%", asclli},
		{"%d", d_print}, {"%i", i_print}
	};
	va_list arg;
	int i, j, length = 0;

	va_start(arg, format);
	if (format == NULL || format[0] == '%' && format[1] == '\0')
	{
	return (-1);
	}
Here:
	while (format[i] != '\0')
	{
		j = 4;

		while (j >= 0)
		{
			if (funcs[j].index[0] == format[i] && funcs[j].index[i] == format[i + 1])
			{
				length = length + funcs[j].f(arg);
				i = i + 2;
				goto Here;
			}
			j--;
		}
			putchar(format[i]);
			i++;
			length++;
	}
	va_end(arg);
	return (length);
}
