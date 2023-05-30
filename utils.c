#include "main.h"

/**
 * is_printable - Checks if a char can be printed
 * @c: which char will be checked
 *
 * Return: if c is printable 1, otherwise 0
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Appends ASCII in hexadec code to a buffer
 * @buffer: Array of characters
 * @i: Index where t o start appending
 * @ascii_code: ASCII code
 *
 * Return: Always returns 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	/* The hexadecimal format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Checks if  character is a digit
 * @c: which char will be checked
 *
 * Return: if c is a digit return 1, otherwise 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - assigns a number to a specified size
 * @num: number to assign
 * @size: number indicating which type to assign
 *
 * Return: Assigned value of number
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Assigns number to specified size
 * @num: number to assign
 * @size: number indicating which type to assign
 *
 * Return: Assigned value of number
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

