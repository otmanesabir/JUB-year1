/*
 JTSK-320111
 a5 p10.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb) {
    // assigns each variable its value
    *prod = a*b;
    *div = a/b;
    *pwr = pow(a, b);
    *invb = 1/b;
}

int main() {
    float a;
    float b;
//  scans values of a and b
    scanf("%f", &a);
    scanf("%f", &b);
    float prod;
    float div;
    float pwr;
    float invb;
    // passes prod, di, pwr and inb pointers
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("The product of a and b is: %f\n", prod);
    printf("The divison of a and b is: %f\n", div);
    printf("The divison of a power b is: %f\n", pwr);
    printf("The value of 1/b is: %f\n", invb);
    
}



