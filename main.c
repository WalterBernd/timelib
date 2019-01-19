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

   int year = 2000;
   int month = 1;
   int day = 1;
   int test = 0;

    printf("Year:");
    scanf("%i", &year);
    printf("\nMonth:");
    scanf("%i", &month);
    printf("\nDay:");
    scanf("%i", &day);
    test = day_of_the_year(day, year, month);
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
