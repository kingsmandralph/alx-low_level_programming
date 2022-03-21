#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s - inputs string
 * Description: Print the string in reverse and on a new line
 * Return: no return
 */

void print_rev(char *s)
{
int count = 0;
while (*s != '\0')
{
s++;
count++;
}
while (count > 0)
{
s--;
_putchar(*s);
count--;
}
_putchar('\n');
}
