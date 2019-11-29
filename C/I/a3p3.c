/*
 JTSK-320111
 a3 p3.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);
    // converts the characters to the ASCII numerical values
    int as = (int) x;
    /* checks to which category the character
     belongs using the ASCII table */
    if ( as >= 48 && as <= 57 ) {
        printf("%c", x);
        printf(" is a digit\n");
    } else if ((as >= 65 && as <= 90)|| (as >= 97 && as <= 122 )) {
        printf("%c", x);
        printf(" is a letter\n");
    } else {
        printf("%c", x);
        printf(" is some other symbol\n");
    }
}

