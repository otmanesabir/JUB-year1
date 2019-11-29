/*
 JTSK-320111
 a4 p3.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>

float to_pounds(int kg, int g) {
    float total;
    float g_to_kg = (float) g / 1000;
    total = (kg + g_to_kg)*2.2;
    printf("Result of conversion: %f\n", total);
    return 0;
}
    int main() {
        int kg;
        int g;
        scanf("%d\n", &kg);
        scanf("%d", &g);
        to_pounds(kg, g);
        }

