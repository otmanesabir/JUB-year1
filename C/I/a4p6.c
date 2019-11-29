/*
 JTSK-320111
 a4 p6.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>

double sum25(double v[], int n) {
    if ( n <= 5 ) {
        printf("One or both positions are invalid\n");
        return -111;
    } else {
        double sum = 0;
        sum = v[2] + v[5];
        printf("sum=%lf\n", sum);
        }
    return 0;
    }

int main() {
    int n;
    double v[20];
    scanf("%d", &n);
    for ( int i = 0; i < n; i++) {
        scanf("%lf", &v[i]);
    }
    sum25(v, n);
}
