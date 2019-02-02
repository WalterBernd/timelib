/**
 *Projekt: Timelib
 *Datum:07.01.2019
 *Autor: Bernd Walter
 **/

#include <stdio.h>
#include <stdlib.h>
#include "timelib.h"

int main()
{
   do{
    // Add the integer
   int year = 2000;
   int month = 1;
   int day = 1;
   int test = 0;
    //Add the pointer
   int *pday;
   int *pmonth;
   int *pyear;
   // set pointer to integer
   pday = &day;
   pmonth = &month;
   pyear = &year;

   input_date(&day, &month, &year);


    test = day_of_the_year(day, month, year);
    if(test != -1)
    {
        printf("The day is: %i", test);
    }
    else
    {
        printf("This date is wrong, please try an other one! ");
    }
    printf("\n");
    printf("\n");
}while(1);

return 0;
}
