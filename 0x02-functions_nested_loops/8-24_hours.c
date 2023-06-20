#include "main.h"

/**
 * jack_bauer - every minute of the day of Jack Bauer
 * 00:00 to 23:59
 */
void jack_bauer(void)
{
	int k, l, z, v;

	for (k = 0; k <= 2; k++)
	{
		for (l = 0; l <= 0; l++)
		{
		if ((k <= 1 && l <= 9) || (k <= 2 && l <= 3))
		{
			for (z = 0; z <= 5; z++)
			{
				for (v = 0; v <= 9; v++)
				{
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar(58);
				_putchar(z + '0');
				_putchar(v + '0');
				_putchar('\n');
				}
			}
		}
		}
	}
}
