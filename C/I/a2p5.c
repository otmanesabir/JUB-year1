/*
 JTSK-320111
 a2 p5.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>

int main() {
    char x;
    scanf("%d", &x)
    if ( x >= 65 && x <= 122 ) {
        printf(x ,"is a character %c\n");
    } else if (x >= 48 && x <= 57) {
        printf(x, "is a number %c\n");
    } else {
        printf(x, "is some other symbol %c\n")
    }
    return 0;
}
