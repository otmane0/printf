#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct The_main - func.
 * @index: is.
 * @f: a func.
*/
typedef struct The_main
{
	char *index;
	int (*f)();
} the_main;

int _s_trlen(const char *stringg);
int _strlen(char *stringg);
int c_print(va_list list);
int s_print(va_list list);
int asclli(void);
int i_print(va_list args);
int d_print(va_list args);

int _printf(const char *format, ...);

#endif
