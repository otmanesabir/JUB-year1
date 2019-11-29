/*
 JTSK-320111
 a4 p7.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>

float product(float a, float b) {
    printf("%f\n", a*b);
    return 0;
}
void productbyref(float a, float b, float *p) {
    *p = a*b;
    printf("%f\n", *p);
}
void modifybyref(float *a, float *b) {
    float ch1, ch2;
    ch1 = ((3 / *a) * 100);
    ch2 = ((11 / *b) * 100);
    float *na = &ch1;
    float *nb = &ch2;
    // prints the change of a
    printf("%f\n", *na);
    // prints the change of b
    printf("%f\n", *nb);
}

int main()
{
    float a,b,p = 0;
    scanf("%f", &a);
    scanf("%f", &b);
    product(a, b);
    productbyref(a, b, &p);
    modifybyref(&a, &b);
    return 0;
}
