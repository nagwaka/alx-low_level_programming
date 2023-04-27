#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 *@format: list of types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	const char *p = format;

	va_start(args, format);
	if (format == NULL)
		return;
	while ((c = *p++))
	{
		if (c == 'c')
		{
			i = va_arg(args, int);
			printf("%c", i);
		}
		else if (c == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (c == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (c == 's')
		{
			s = va_arg(args, char*);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		if ((*p != '\0') && (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's'))
			printf(", ");
	}
	va_end(args);
	printf("\n");
}