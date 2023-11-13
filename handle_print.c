#include "main.h"

/**
 * handle_print - prints an argument based on its type
 * @fmt: formatted string in which to print the arguments
 * @list: list of arguments to print
 * @ind: ind
 * @buffer: buffer array to handle print
 * @flags: calculates active flags
 * @width: get width
 * @precision: precision specification
 * @size: size specifier
 * Return: 1 or 2
 */
int handle_print(const char *fmt, int *ind, va_list list, char buffer[], int flags, int width, int precision, int size)
{
	int i, unknow_len = 0, printed_char = -1;
	fmt_t fmt_types[] = {
	{'c', print char}, {'s', print_string}, {'%', print_percent}
	};
	for (i = 0; fmt_types[I].fmt != '\0'; i++)
	if (fmt[*ind] == fmt_types[i].fmt)
	return (fmt_types[i].fn(list, buffer, flags, width, precision, size));

	if (fmt_types[i].fmt == '\0')
	{
	if (fmt[*ind] == '\0')
	return (-1);
	unknow_len += write(1, "%%", 1);
	if (fmt[*ind - 1] == '')
	unknow_len += write(1, " ", 1);
	else if (width)
	{
	--(*ind);
	while (fmt[*ind] != ' ' && fmt[*ind] != '%')
	--(*ind);
	if (fmt[*ind] == ' ')
	--(*ind);
	return (1);
	}
	unknow_len += write(1, &fmt[*ind], 1);
	return (unknow_len);
	}
	return (printed_chars);
}
