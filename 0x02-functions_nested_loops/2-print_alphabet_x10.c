#include <stdio.h>

void print_alphabet_x10(void);

int main(void)
{
	for (int x = 0; < 10; ++x)
	{
		print_alphabet_x100();
		putchar('\n');
	}

	return (0);
}


void print_alphabet_x10(void)
{
	for (int i = 97; i <= 122; i++)
	{
	putchar(i);

	}
}
