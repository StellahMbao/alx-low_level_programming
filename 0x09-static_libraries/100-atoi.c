#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int idx_digit_starts = (idx_num_starts(s));
	int sign;
	int digits_to_print = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (idx_num_starts(s));

	if (idx_digit_starts < 0)
	{
		return (0);
	}
	sign = find_sign(s);

	while ((s[idx_digit_starts] >= '0' && s[idx_digit_starts] <= '9')
		&& (idx_digit_starts <= _strlen(s)))
	{
		digits_to_print += 1;
		idx_digit_starts++;
	}
	i = 1;
	while (i < digits_to_print)
	{
		t *= 10;
		i++;
	}
	for (i = digit; i < (digit + digits_to_print); i++)
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}
	return (num * sign);
}
