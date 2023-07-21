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

/*
* Here's a breakdown of how the function works:
*
* The function first checks if the given year is a leap year using the
* conditions (year % 4 == 0 || ((year % 100 == 0) && (year % 400 == 0))).
* This condition checks if the year is divisible by 4 and, if it's a century
* year (divisible by 100), it also checks if it's divisible by 400.
*
* Leap years occur every 4 years: Every year that is evenly divisible by 4
* is a leap year. This is why the first part of the condition is
* (year % 4 == 0). For example, the year 2020 is a leap year because
* 2020 % 4 is equal to 0.
*
* However, not all years divisible by 4 are leap years. There is an
* exception to the above rule: Century years (years ending with "00")
* are not leap years unless they are divisible by 400.
*
* To handle this exception, the second part of the condition
* ((year % 100 == 0) && (year % 400 == 0)) is used. It checks if the
* year is a century year (divisible by 100) using (year % 100 == 0).
* For example, the year 1900 is divisible by 100 and is a century year.
*
* If a year is a century year, it is still a leap year only if it is
* divisible by 400. For example, the year 2000 is a century year, but it
* is also divisible by 400, making it a leap year.
*
* Then,
*
* If the year is a leap year and the input date's month is after February
* (i.e., greater than 2), and the day is 60 or greater, it means we are
* considering a date after February 29th. Since leap years have 366 days,
* we increment the day by 1 to account for the extra day.
*
* The function then proceeds to print the day of the year and the remaining
* days in the year, based on the input date.
*
* If the year is not a leap year or the date is before February 29th,
* it will calculate the day of the year and the remaining days considering
* a year with 365 days.
*
* If the date is invalid (February 30th or later), it will print an error
* message indicating that the date is invalid and show the correct date by
* subtracting 31 days from the day value.
*/

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 == 0)))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
