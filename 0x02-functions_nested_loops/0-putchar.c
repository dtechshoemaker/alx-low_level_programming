#include <main.h>
/**
 * File: 0-putchar.c
 * name : peter kimbeghi
 */

int main(void)
{
	char *sh = "Main";

	
	while (*sh)
	{
		_putchar(*sh);
		sh++;

	}

	_putchar('\n');

	return (0);
}
