/**
 *Projekt: Timelib
 *Datum:07.01.2019
 *Autor: Bernd Walter
 **/

#include <stdio.h>
#include <stdlib.h>



/**
Input
**/
int inputdate(int day, int month, int year)
{
    return 0;
}
/**
Leapear
returns 1 if true
returns 0 if false
returns -1 if error
**/
int is_Leapyear(int year)
{
    int i = 0;
    if(year >= 1582)
    {
        if(year % 400 == 0)
        {
           i = 1;
           // return 1;
        }
        if(year % 4 == 0 && year % 100 != 0)
        {
            i = 1;
            //return 1;
        }
        else
        {
            i = 0;
            //return 0;
        }

        return i;

    }
    return -1;
}
/**
Get the days per Month
returns 1-31 of true
returns -1 if error
**/
int get_days_for_month(int month, int year)
{
#define FEB 28

    int days = 0;
    if(month == 2)
    {
        int leapyear_check = is_Leapyear(year);
        days = FEB + leapyear_check ;
        return days;
    }
    if((month <= 7 && month % 2 != 0) || (month >= 8 && month % 2 == 0))
    {
        return 31;
    }
    else
    {
        return 30;
    }
}

/**
Test for a true date
returns 1 if true
returns 0 if false
**/
int exists_date(int day, int month, int year)
{
    int test_days = 0;
    #define FEB 28
    if(year >= 1582 && year <= 2400)
    {
        if(month >= 1 && month <= 12)
        {
            test_days = get_days_for_month(month, year);
        }
    }
    else
    {
        return 0;
    }
}

/**
calculate the day of the year
returns: number of the day

 **/
int day_of_the_year(int day, int month, int year)
{
   int Counter = day;

    for(int i = 1; i <= (month - 1) ; i++)
    {
        int j = get_days_for_month(i, year);
        Counter += j;
    }
    return Counter;
}

int main()
{
    printf("Tag des Jahres: %i\n", day_of_the_year(31, 12, 2018));
    return 0;
}
