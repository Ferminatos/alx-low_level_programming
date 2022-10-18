#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hr;
	int mn;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			if (hr < 10)
			{
				_putchar(hr);
				_putchar(hr);
			}

			else
				_putchar(hr);

			_putchar(':');

			if (mn < 10)
			{
				_putchar(mn);
				_putchar(mn);
			}

			else
				_putchar(mn);

			_putchar('\n');
		}
	}
}
