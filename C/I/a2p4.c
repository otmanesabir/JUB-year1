/*
 JTSK-320111
 a2 p4.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>

int main() {
    /* initialized three floats and reads them from te keyboard */
    float a;
    float b;
    float h;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);
    printf("square area=%f\n", a*a); //prints the area of a square with the side a
    printf("rectangle area=%f\n", a*b); //prints the rectangle area with a length a and width b
    printf("triangle area=%f\n", (a*h)/2); //prints the area of a triangle with a base a and height h
    printf("trapezoid area=%f\n", ((a+b)/2)*h); //prints the area of a trapezoid of bases a, b and height h 
     }

