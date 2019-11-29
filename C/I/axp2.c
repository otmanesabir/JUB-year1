/*
 JTSK-320111
 practice_sheet_p2.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    double x;
    float y;
    int z;
    double *r_ptr;
    scanf("%lf", &x);
    scanf("%f", &y);
    scanf("%d", &z);
    double result = x*y*z;
    printf("%lf\n", result);
    r_ptr = &result;
    *r_ptr += 5;
    printf("%lf\n", result);
    printf("%lf\n", *r_ptr);
    return 0;
}




