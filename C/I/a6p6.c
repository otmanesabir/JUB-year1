/*
 JTSK-320111
 a6 p6.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

void recur_down (int n) {
    // base case
    if ( n == 0 ) {
        printf ("%d\n", n);
    } else {
        printf ("%d\n", n);
        // recursive function call
        recur_down (n - 1);
    }
}
int main() {
    int n;
    // scans the number we want to count down
    scanf("%d", &n);
    recur_down(n);
    return 0;
}




