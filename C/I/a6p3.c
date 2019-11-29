/*
 JTSK-320111
 a6 p3.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int count_lower( char *str ){
    int count = 0;
// while loop to read the string
    for (;*str != '\0'; str++){
        // condition to check if the character is lowercase
        if ( islower(*str) ) {
            count++;
        }
    }
    // returns the count of lowercase numbers
    return count;
}

int main() {
    char str[50];
    // scans the string
    fgets(str, sizeof(str), stdin);
/*  condition that keeps the loop
 running until only a new line is enterd */
    while ( strcmp(str, "\n") != 0 ) {
        printf("%d\n", count_lower(str));
        fgets(str, sizeof(str), stdin);
    }
}



