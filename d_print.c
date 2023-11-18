#include "main.h"
/**
 * d_print - main func
 * @list: the format string
 * Return: lenght
 */

int d_print(va_list args)
{
	int number, full_num, last_N, digit, exp, i = 1;

	number = va_arg(args, int);
	last_N = number % 10;
	exp = 1;
	number = number / 10;
	full_num = number;

	if (full_num > 0)
	{
		while (full_num / 10 != 0)

			{
				exp = exp * 10;
				full_num /= 10;
			}

			full_num = number;
		while (exp > 0)
		{
			digit = full_num / exp;
			putchar(digit + '0');
			full_num = full_num - (digit * exp);
			exp = exp / 10;
			i++;
		}

	}

	if (last_N < 0)
	{
		putchar('-');
		full_num = -full_num;
		number = -number;
		last_N = -last_N;
		i++;
	}

	putchar(last_N + '0');

	return (i);

}
