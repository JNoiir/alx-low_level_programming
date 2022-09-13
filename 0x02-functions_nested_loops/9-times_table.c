#include "main.h"
/**
 * times_table - prints times table up to 9
 * Return: void
 */
void times_table(void)
{
	int a, b, mul;

	mul = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			mul = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul >= 10)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if ((mul < 10) && (b != 0))
			{
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
			else
				_putchar((mul % 10) + '0');
		}
		_putchar('\n');
	}
}
