#include "main.h"
/**
 * _puts - Prints a string
 * @str: The string to print
 *
 * Return:void
 */
void_puts(chare * str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
