#include <stdio.h>

/**
* main - print the size of various types
*
* Return: Always 0 (Success)
*/

int main(void)

       printf("Size of char: %d byte(s)\n",  (int) sizeof(char));
       printf("int: %d byte(s)\n",   (int) sizeof(int));
       printf("long int: %d byte(s)\n",  (int) sizeof(long int));
       printf("int: %d byte(s)\n",  (int) sizeof(long long int));
       printf("float: %d byte(s)\n",  (int) sizeof(float));

       return (0);
}
