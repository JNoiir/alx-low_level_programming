#include "main.h"
/**
<<<<<<< HEAD
 * main - entry point
 *
 * print_alphabet_x10 - prints alphabet 10 times
 * @c: Character in ASCII
 * Return: Always 0 (success)
=======
 * print_alphabet_x10 - prints all lowercase alphabets 10 times
>>>>>>> 45e4b7220ab0fa9b817270bb56d2823b62b1557a
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
