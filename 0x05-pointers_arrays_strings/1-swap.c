#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap integers
 * @a: first parameter
 * @b: second parameter
 * Description: swaps the values of two integers
 * Return: Always (0);
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
