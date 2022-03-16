#include "main.h"

/**
 *print_alphabet_x10 - print alpha x10
 *@void: no arguments.
 *
 *Return: no return value.
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

