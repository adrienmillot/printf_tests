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
	char str[] = "toto";
	char strR[] = "aDRIen";
	int len1, len2, i = INT_MAX;
	unsigned int ui;
	void *addr;

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	void *p = &i;
	void *pp = &str;

	/**
	 * Simple string test
	 */
	printf("------------------ Simple string test ---------------------\n");
	len1 = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Character test
	 */
	printf("\n-------------------- Character test -----------------------\n");
	len1 = _printf("Character:[%c]\n", 'H');
	len2 = printf("Character:[%c]\n", 'H');
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * String with flag test
	 */
	printf("\n---------------- String with flag test- --------------------\n");
	len1 = _printf("String:[%s]\n", "I am a string !");
	len2 = printf("String:[%s]\n", "I am a string !");
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Percent character test
	 */
	printf("\n---------------- Percent character test --------------------\n");
	len1 = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Print integer test
	 */
	printf("\n------------------- Print integer test ---------------------\n");
	len1 = _printf("Integer:[%i]\n", 7);
	len2 = printf("Integer:[%i]\n", 7);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Print decimal test
	 */
	printf("\n------------------- Print decimal test ----------------------\n");
	len1 = _printf("Decimal:[%d]\n", 498);
	len2 = printf("Decimal:[%d]\n", 498);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Negative number tests
	 */
	printf("\n---------------- Negative number tests ----------------------\n");
	len1 = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Maxsize of int test
	 */
	printf("\n------------------ Maxsize of int test ----------------------\n");
	len1 = _printf("INT_MAX:[%i]\n", INT_MAX);
	len2 = printf("INT_MAX:[%i]\n", INT_MAX);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Minsize of int test
	 */
	printf("\n------------------- Minsize of int test ----------------------\n");
	len1 = _printf("INT_MIN:[%i]\n", INT_MIN);
	len2 = printf("INT_MIN:[%i]\n", INT_MIN);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Print ASCII value test
	 */
	printf("\n---------------- Print ASCII value test ----------------------\n");
	len1 = _printf("ASCII:[%i]\n", 'A');
	len2 = printf("ASCII:[%i]\n", 'A');
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Unsigned number test
	 */
	printf("\n------------------ Unsigned number test -----------------------\n");
	len1 = _printf("Unsigned:[%u]\n", ui);
	len2 = printf("Unsigned:[%u]\n", ui);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Maxsize of unsigned int test
	 */
	printf("\n------------- Maxsize of unsigned int test ---------------------\n");
	len1 = _printf("UINT_MAX:[%u]\n", UINT_MAX);
	len2 = printf("Unsigned:[%u]\n", UINT_MAX);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Octal number test
	 */
	printf("\n------------------- Octal number test ---------------------------\n");
	len1 = _printf("Unsigned octal:[%o]\n", ui);
	len2 = printf("Unsigned octal:[%o]\n", ui);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Hexadecimal number test
	 */
	printf("\n-------------- Hexadecimal number test ---------------------------\n");
	len1 = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len2 = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Pointer hexadecimal address test
	 */
	printf("\n-------------- Pointer hexadecimal address test -------------------\n");
	len1 = _printf("Address:[%p]\n", addr);
	len2 = printf("Address:[%p]\n", addr);
	printf("Length:[%d, %d]\n", len1, len2);

	/**
	 * Unprintable character test
	 */
	printf("\n----------------- Unprintable character test ----------------------\n");
	len1 = _printf("Unprintable character %S\n", "test1 \n test2");
	printf("Length:[%d]\n", len1);
	len1 = _printf("Unprintable character %S\n", "test1 \t test2");
	printf("Length:[%d]\n", len1);
	len1 = _printf("Unprintable character %S\n", "test1 \b test2");
	printf("Length:[%d]\n", len1);
	len1 = _printf("Unprintable character %S\n", "test1 \a test2");
	printf("Length:[%d]\n", len1);
	len1 = _printf("Unprintable character %S\n", "ned long nb,test1 \v test2");
	printf("Length:[%d]\n", len1);
	len1 = _printf("Unprintable character %S\n", "test1 \r test2");
	printf("Length:[%d]\n", len1);

	/**
	 * Reverse string test
	 */
	printf("\n----------------------- Reverse string test ----------------------\n");
	len1 = _printf("%r\n", "Holberton");
	printf("Length:[%d]\n", len1);

	/**
	 * Pointer address test
	 */
	printf("\n----------------------- Pointer address test ----------------------\n");
	len1 = _printf("[adress = %p %p]\n", p, pp);
	len2 = printf("[adress = %p %p]\n", p, pp);

	/**
	 * Rot13 conversion test
	 */
	printf("\n----------------------- Rot13 conversion test ----------------------\n");
	len1 = _printf("[rot13 = %R, %R]\n", str, strR);
	printf("Length:[%d]\n", len1);

	/**
	 * Nullable test
	 */
	printf("\n---------------------------- Nullable test -------------------------\n");
	_printf("test %s\n", NULL);
	printf("test %s\n", NULL);
	printf("test %c\n", NULL);
	_printf("test %R\n", NULL);
	_printf("test %r\n", NULL);
	_printf("test %s\n", NULL);
	_printf("test %S\n", NULL);
	printf("test %x\n", 0);

	/**
	 * Only one % character
	 */
	printf("\n------------------------- Only one % character ----------------------\n");
	_printf("%");
	printf("%");
	return (0);
}
