/*
read a birth data as year month day and find the age in years and months and days 
or months and days
or weeks and days
or days
or hours
or minutes
or seconds
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int birth_day,birth_month,birth_year;
    int current_day,current_month,current_year;
    int sum_days,age_in_days,age_in_months,age_in_years;

    printf("Please Enter birthdate in format (YYYY MM DD): ");
    scanf("%d%d%d",&birth_year,&birth_month,&birth_day);


    printf("Please Enter  current date in format (YYYY MM DD):");
    scanf("%d%d%d",&current_year,&current_month,&current_day);

    sum_days=(current_year-birth_year)*365+(current_month-birth_month)*30+(current_day-birth_day);
    age_in_years=sum_days/365;
    age_in_months=sum_days%365/30;
    age_in_days=sum_days%365%30;

    printf("Age\n");
    printf("%d years %d month %d days\n",age_in_years,age_in_months,age_in_days);

    age_in_months=sum_days/30;
    age_in_days=sum_days%30;

    printf("or %d months %d days\n",age_in_months,age_in_days);

    int age_in_weeks=sum_days/7;
    age_in_days= sum_days%7;

    printf("or %d weeks %d days\n",age_in_weeks,age_in_days);
    printf("or %d days\n",sum_days);

    int age_in_hours=sum_days*24;

    printf("or %d hours\n",age_in_hours);

    long int age_in_minutes=age_in_hours*60;
    printf("or %ld minutes\n",age_in_minutes);
  
    long int age_in_seconds=age_in_minutes*60;
    printf("or %ld seconds\n",age_in_seconds);

    return 0;
}
