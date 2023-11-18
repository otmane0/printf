#include "main.h"

/**
 * s_print - main func
 * @list: the format string
 * Return: lenght
 */

int s_print (va_list list)
{
	char *array;
	int i;
	int lenght = 0;

	array = va_arg(list, char*);
	if (array == NULL)
	{
		array = "(null)";
		for (i = 0; array[i] != '\0'; i++)
		{
			putchar(array[i]);
			lenght++;
		}
		return (lenght);
	}
	else
	{
		lenght = _strlen(array);
		for (i = 0; array[i] != '\0'; i++)
		{
			putchar(array[i]);
		}
		return (lenght);
	}
}
