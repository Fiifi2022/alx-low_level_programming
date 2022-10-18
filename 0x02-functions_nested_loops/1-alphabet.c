#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		-putchar(la);

	_putchar('\n');
}
