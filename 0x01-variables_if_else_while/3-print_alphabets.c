#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char count;
	char cap;
count = 'a';
cap = 'A';
while (count <= 'z')
{
	putchar(count);
	count++;
}
while (cap <= 'Z')
{
	putchar(cap);
	cap++;
}
putchar('\n');
return (0);
}
