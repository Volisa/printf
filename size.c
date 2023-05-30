#include "main.h"

/**
 * get_size - computes the size to assign the arg
 * @format: string used for formatting output of args
 * @i: list of args to print
 *
 * Return: Precision
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == '1')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}


