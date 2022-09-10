#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (suceess)
 */
int main(void)
{
char count;
count = 'a';
while (count <= 'z')
{
putchar(count);
count++;
}
putchar('\n');
return (0);
}
