#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + '0'); /* Print first digit of hour */
			_putchar((hours % 10) + '0'); /* Print second digit of hour */
			_putchar(':');
			_putchar((minutes / 10) + '0'); /* Print first digit of minute */
			_putchar((minutes % 10) + '0'); /* Print second digit of minute */
			_putchar('\n');
		}
	}
}
