
//
//  lab.c
//  a5 p1.c
//  Otmane Sabir
//  o.sabir@jacobs-university.de
//
#include <stdio.h>
#include <strings.h>
#include <math.h>

int main() {
    /* sets a multi dimensional array
    and allocates a number of values */
    double table[100][100];
    double low, high, step;
    double perm = 0, area = 0;
    double pi = 3.14159265358979;
    scanf("%lf", &low);
    scanf("%lf", &high);
    scanf("%lf", &step);
    double newlow = low;
    int i = 0;
    // Stores all values in the array
    for (;newlow <= high; newlow += step) {
        area = 2*pi*newlow;
        perm = pi*newlow*newlow;
        table[0][i] = newlow;
        table[1][i] = perm;
        table[2][i] = area;
        i++;
    }
    // Prints the stored array
    for ( int j = 0; low <= high; j++) {
            printf("%f", table[0][j]);
            printf(" %f", table[1][j]);
            printf(" %f", table[2][j]);
            printf("\n");
        low += step;
    }
}
