/*
 JTSK-320111
 a2 p6.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>

int main() {
   
    double x, y; // initalizes and reads two double variables x and y
    scanf("%lf\n", &x);
    scanf("%lf\n", &y);
    double *ptr_one, *ptr_two, *ptr_three; // initializes three pointers and assigns variable x to the first two and variable y to the third one
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    // prints all three pointers to show that pointer one and two contain the same memory address while the third one has a different one
    printf("the address of the first pointer is %p\n", ptr_one);
    printf("the address of the second pointer is %p\n", ptr_two);
    printf("the address of the third pointer is %p\n", ptr_three);
    
    
    
     }

