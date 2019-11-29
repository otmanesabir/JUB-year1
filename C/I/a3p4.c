/*
 JTSK-320111
 a3 p4.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>

int main() {
    int n;
    int j = 0;
    scanf("%d", & n);
/*   first we should check wheter our condition is
    verified if it's not then we should rescan n from the keyboard
    if it is then we should display the conversion table */
    while (n <= 0 ) {
        scanf("%d", &n);
    }
    while (n > 0) {
        j++;
        n--;
        if (j <= 1) {
            printf("%d", j);
            printf(" day = %d", j * 24);
            printf(" hours\n");
        } else {
            printf("%d", j);
            printf(" days = %d", j * 24);
            printf(" hours\n");
        }
    }
}

