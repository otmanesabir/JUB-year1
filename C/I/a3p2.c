/*
 JTSK-320111
 a3 p2.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    /* we set up a conditional statement to check wheter the number
     is divisible by 2 and 7 using the modulo operator " % " */
    if ( i % 2 == 0 && i % 7 == 0 ) {
        printf("The number is divisible by 2 and 7\n");
    } else {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    
    return 0;

}
