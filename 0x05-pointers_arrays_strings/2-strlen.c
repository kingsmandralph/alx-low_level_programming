#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - length of  string
 * @s: parameter to be measured
 * Return: length of a string
 */

int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++);
return (i);
}

