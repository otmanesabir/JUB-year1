/*
 JTSK-320111
 p1.3.c
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <stdio.h>

// Minimum finder
#define two_min(A, B) ((A) < (B) ? (A) : (B))
#define min(A, B, C) two_min(two_min(A,B), C)

// Maximum finder
#define two_max(A, B) ((A) > (B) ? (A) : (B))
#define max(A, B, C) two_max(two_max(A, B), C)

// Mid range macro
#define mid_range(A, B, C) ((min(A, B, C) + max(A, B, C))/2.0)


int main(int argc, const char * argv[]) {
    int a, b, c;
    // reads values
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    // finds mid range
    double mid = mid_range(a, b, c);
    // prints mid range
    printf("The mid-range is: %f\n", mid);
    return 0;
}
