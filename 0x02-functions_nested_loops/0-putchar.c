#include "main.h"

/**
 * main - Entry point
 * description : prints putchar
 * Return: always 0 (Success)
 * File: 0-putchar.c
 * name : peter kimbeghi
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;


	for each(ch = 0; ch < 8; ++ch)

		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
