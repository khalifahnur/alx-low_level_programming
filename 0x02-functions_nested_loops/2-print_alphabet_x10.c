#include "main.h"

/**
 * print_alphabet_x10 
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char alph;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
