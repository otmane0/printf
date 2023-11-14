#include "main.h"

/**
 * _printf - main func
 * @format: the format string
 * Return: 0
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	char *str, c;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case '\0':
				return (-1);
			case 's':
				str = va_arg(args, char *);

				write(STDOUT_FILENO, str, strlen(str));
				j += strlen(str);
				i++;
				break;
			case 'c':
				c = va_arg(args, int);
				write(STDOUT_FILENO, &c, 1);
				j++;
				i++;
				break;
			default:
				break;
			}
		}
		else
		{
			write(STDOUT_FILENO, &format[i], 1);
			j++;
		}
		i++;
	}
	return (j);
}

