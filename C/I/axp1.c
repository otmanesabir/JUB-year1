/*
 JTSK-320111
 practice_sheet_p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int n;
    int k = 0;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
        char c = 'A';
        for ( int j = 0; j <= k; j++ ) {
            printf("%c", c);
            c++;
        }
        k++;
        printf("\n");
    }
}




