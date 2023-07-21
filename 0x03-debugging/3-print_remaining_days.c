#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is a leap year
 * @year: year
 * Return: 1 if leap year, 0 otherwise
 */
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	return 0;
}

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
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (is_leap_year(year))
		days_in_month[2] = 29;

	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	int total_days = 0;
	for (int i = 1; i < month; i++)
		total_days += days_in_month[i];

	total_days += day;

	printf("Day of the year: %d\n", total_days);
	printf("Remaining days: %d\n",
    is_leap_year(year) ? 366 - total_days : 365 - total_days);
}
