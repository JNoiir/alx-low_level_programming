#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints alphabet
 * Return: always 0 (success)
 */
int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
