#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, ten times, followed by a new line
 */

void print_alphabet_x10(void)
{
int i = 0;
   
char j;
while(i<10)
{
j = 'a';
while(j<='z')
{
_putchar(j);
j++;
}
_putchar('\n');
i++;
}

}
