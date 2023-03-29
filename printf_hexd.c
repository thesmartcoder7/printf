#include "main.h"

/**
 * printf_hexadecimal - Prints an unsigned number in hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int printf_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (printf_hexa(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}
