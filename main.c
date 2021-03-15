#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1, len2;
	unsigned int ui;
	void *addr;

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	/**
	 * Simple string test
	 */

	len1 = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Character test
	 */

	len1 = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * String with flag test
	 */
	len1 = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Percent character test
	 */
	len1 = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Negative number tests
	 */
	len1 = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Unsigned number test
	 */
	len1 = _printf("Unsigned:[%u]\n", ui);
	len2 = printf("Unsigned:[%u]\n", ui);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Octal number test
	 */
	len1 = _printf("Unsigned octal:[%o]\n", ui);
	len2 = printf("Unsigned octal:[%o]\n", ui);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Hexadecimal number test
	 */
	len1 = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Pointer hexadecimal address test
	 */
	len1 = _printf("Address:[%p]\n", addr);
	len2 = printf("Address:[%p]\n", addr);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Unknow flag test
	 */
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}