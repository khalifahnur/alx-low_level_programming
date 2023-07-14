#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;
	char capital;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (capital = 'A'; capital <= 'Z'; capital++)
		putchar(capital);
	putchar('\n');

	return (0);
}
