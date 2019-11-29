/*
 JTSK-320111
 a3 p6.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>


int main() {
    float x;
    int n;
    scanf("%f", &x);
    scanf("%d", &n);
    while (n <= 0) {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    while ( n > 0 ) {
            printf("%f\n", x);
            n--;
    }
}

