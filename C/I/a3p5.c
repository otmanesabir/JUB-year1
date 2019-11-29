/*
 JTSK-320111
 a3 p5.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>


int main() {
    int n;
    scanf("%d", & n);
    for (; n <= 0;) {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    for (int j = 1; n > 0 && n == (int) n; j++ ) {
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

