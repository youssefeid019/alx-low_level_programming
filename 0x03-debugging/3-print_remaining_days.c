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
int days;

if (month < 1 || month > 12)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

if (day < 1 || day > 31)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

days = convert_day(month, day);

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
if (days >= 60)
{
days++;
}
}

if (days > 365)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

printf("Day of the year: %d\n", days);
printf("Remaining days: %d\n", 365 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) - days);
}
