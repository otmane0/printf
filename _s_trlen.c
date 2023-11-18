#include "main.h"

/**
 * _s_trlen - a function.
 * @stringg: string.
 * Return: E.
*/
int _s_trlen(const char *stringg)
{
	int i = 0;

	{
		while (stringg[i] != '\0')
		{
			i++;
		}
		return (i);
	}
}
