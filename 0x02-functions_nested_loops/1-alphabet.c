#include "main.h"

void print_alphabet() {
	char c;

	for(c = 'a'; c <= 'z'; c++) {
	
		putchar(c);
	}

	putchar('\n');

}

int main(){

	print_alphabet();
	return (0);
}
