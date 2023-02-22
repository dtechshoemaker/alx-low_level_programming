#include "main.h"

/**
 * 2-print_alphabet_x10.c - print 10 times the alphabets, in lowercase
 *
 * result: 0 (sucess)
 */

int main(void)
{
	char ch;
	int i;


	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}



}
