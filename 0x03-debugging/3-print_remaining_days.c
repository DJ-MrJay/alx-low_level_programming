#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int days_in_feb = 28;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		days_in_feb = 29;
	}

	if (month >= 2 && day > days_in_feb)
	{
		day--;
	}

	int day_of_year = 0;
	switch (month)
	{
	case 12:
		day_of_year += 30; /* Nov */
	case 11:
		day_of_year += 31; /* Oct */
	case 10:
		day_of_year += 30; /* Sep */
	case 9:
		day_of_year += 31; /* Aug */
	case 8:
		day_of_year += 31; /* Jul */
	case 7:
		day_of_year += 30; /* Jun */
	case 6:
		day_of_year += 31; /* May */
	case 5:
		day_of_year += 30; /* Apr */
	case 4:
		day_of_year += 31; /* Mar */
	case 3:
		day_of_year += days_in_feb; /* Feb */
	case 2:
		day_of_year += 31; /* Jan */
	default:
		break;
	}

	day_of_year += day;

	if (day_of_year > 365)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", 365 - day_of_year);
	}
}
