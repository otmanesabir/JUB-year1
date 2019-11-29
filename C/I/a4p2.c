/*
 JTSK-320111
 a4 p2.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>

float convert(int cm) {
    // converting integer to float
    float cm2 = (float) cm;
    float km = cm2 / 100000;
    printf("Result of conversion: %f\n", km);
    return 0;
}
    int main() {
        int cm;
        scanf("%i", &cm);
        convert(cm);
        }

