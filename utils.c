#include "main.h"

/**
 * is_printable - This will evaluate if a char is printable
 * @c: This is the Char to be evaluated.
 *
 * Return: This means 1 if c is printable, 0 otherwise
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - This is the append ascci in hexadecimal code to buffer
 * @buffer: This is the array of chars.
 * @i: This is the index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
 */

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - This verifies if a char is a digit
 * @c: This is the char to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - This will casts a number to the specified size
 * @num: This is the number to be casted.
 * @size: This is the number indicating the type to be casted.
 *
 * Return: This is the casted value of num
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
 * convert_size_unsgnd - This will cast a number to the specified size
 * @num: This is number to be casted
 * @size: This is the number indicating the type to be casted
 *
 * Return: This is the casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
