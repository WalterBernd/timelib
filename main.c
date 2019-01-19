/**
 *Projekt: Timelib
 *Datum:07.01.2019
 *Autor: Bernd Walter
 **/

#include <stdio.h>
#include <stdlib.h>
#include "timelib.h"




int is_Leapyear(int year);
int inputdate(int day, int month, int year);
int get_days_for_month(int month, int year);
int exists_date(int day, int month, int year);
int exists_date(int day, int month, int year);
int day_of_the_year(int day, int month, int year);





int main()
{
    printf("Tag des Jahres: %i\n", day_of_the_year(31, 12, 2018));
    return 0;
}
