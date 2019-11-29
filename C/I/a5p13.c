/*
 JTSK-320111
 a5 p13.c
 Otmane Sabir o.sabir@jacobs-university.de
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// function that turns lowercase to uppercase

void uppcase(char *str) {
    char *innit;
    // stores the pointers initial address
    innit = str;
    while ( *str != '\0' ) {
        // checks if the character is lowercase
        if ( islower(*str) ) {
            // turns it into uppercase
            *str = toupper(*str);
        }
        str++;
    }
    printf("uppcase=%s", innit);
}

// function that turns uppercase to lowercase

void lowcase(char *str) {
    char *innit;
    // stores the pointers initial address
    innit = str;
    while ( *str != '\0' ) {
        // checks if the character is uppercase
        if ( isupper(*str) ) {
            // turns it into lowercase
            *str = tolower(*str);
        }
        str++;
    }
    printf("lowcase=%s", innit);
}
int main() {

    char str[80];
    // scans the first time
    fgets(str, sizeof(str), stdin);
    /* condition to kepe the loop running
     unless the entered string is exit */
    while ( strcmp("exit\n", str) != 0 ) {
        uppcase(str);
        lowcase(str);
        fgets(str, sizeof(str), stdin);
    }
     
}


