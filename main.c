/**
 *
 *
 *
 **/

#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 **/
int day_of_the_year(int day, int month, int year)
{

    return 0;
}
int is_Leapyear(int year)
{
    if(year >= 1582)
    {
        if(year % 400 == 0)
        {
            return 1;
        }
        if(year % 4 == 0 && year % 100 != 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }


    }
    return -1;
}

int main()
{
    printf("Tag des Jahres: %i\n", day_of_the_year(31, 12, 2018));
    return 0;
}
