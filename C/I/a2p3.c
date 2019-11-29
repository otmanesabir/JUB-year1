/*
 JTSK-320111
 a2 p3.c
 Otmane Sabir o.sabir@jacobs-university.de
 */


#include <stdio.h>

int main() {
    /* initialized three variables to store the number of weeks, days, hours and a total variable to store the sum of hours  */
    int week;
    int days;
    int hours;
    int total;
    scanf("%d\n", &week);
    scanf("%d\n", &days);
    scanf("%d", &hours);
    total = (week * 168) + (days * 24) + hours; // computes the number of hours in the week and days and adds it to the hours and stores the value in the total variable
    printf("total number of hours=%d\n", total); // prints the sum of the hours
    

     }

