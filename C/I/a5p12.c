/*
 JTSK-320111
 a5 p12.c
 Otmane Sabir o.sabir@jacobs-university.de
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void replaceAll(char *str, char c, char e) {
    char *init;
    // stores the pointer's initial address
    init = str;
    /* condition that keeps the loop
     until the string is entirely scanned */
    while ( *str != '\0' ) {
        /* checks if the current character
         is the one we want to change */
        if ( *str == c ) {
            *str = e;
        }
        // increments the pointer's address
        str++;
    }
    // prints the string
    printf("%s", init);
}

int main() {
    char c;
    char e;
    char str[80];
    // scans the first time
    fgets(str, sizeof(str), stdin);
    /* condition to kepe the loop running
     unless the entered string is stop */
    while ( strcmp("stop\n", str) != 0 ) {
        scanf("%c", &c);
        getchar();
        scanf("%c", &e);
        getchar();
        // function call
        replaceAll(str, c, e);
        fgets(str, sizeof(str), stdin);
    }
}


