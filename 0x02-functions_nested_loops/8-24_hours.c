#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: 0 (Success)
 *
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int remaining_hours;
	int remaining_minutes;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			remaining_hours = hours % 10;
			remaining_minutes = minutes % 10;
			_putchar(hours / 10 + '0');
			_putchar(remaining_hours + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(remaining_minutes + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
