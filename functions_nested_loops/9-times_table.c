#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;

			if (col == 0)
				_putchar(product + '0'); /* Print first number without space */
			else
			{
				_putchar(',');
				_putchar(' ');

				/* Adjust spacing for alignment */
				if (product < 10)
					_putchar(' '); /* Print extra space for single digits */

				if (product >= 10)
					_putchar((product / 10) + '0'); /* Print tens place */

				_putchar((product % 10) + '0'); /* Print ones place */
			}
		}
		_putchar('\n'); /* Move to the next row */
	}
}
