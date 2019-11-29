/*
 JTSK-320111
 a2 p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */


#include <stdio.h>

int main() {
    double x,y; //initializes two doubles
    scanf("%lf" , &x); //scans the variables
    scanf("%lf" , &y);
    printf("sum of doubles=%lf\n", x+y); // prints the sum of the two doubles without forgetting to use the correct formatting specification (%d)
    printf("difference of doubles=%lf\n", x-y); // prints the difference ( x-y )
    printf("square=%lf\n", x*x); // prints the square of the double x
    int a,b; //initializes two integers
    scanf("%d" , &a); // scans the two variables
    scanf("%d" , &b);
    printf("sum of integers=%d\n", a+b); // prints the sum of the integers 
    printf("product of integers=%d\n", a*b);
    char m,n;
        getchar();
    scanf("%c" , &m);
        getchar();
    scanf("%c" , &n);
    printf("sum of chars=%d\n", m+n);
    printf("product of chars=%d\n", m*n);
    printf("sum of chars=%c\n", m+n);
    printf("product of chars=%c\n", m*n);
    
    return 0;
}

