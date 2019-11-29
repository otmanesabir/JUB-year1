!/*
 JTSK-320111
 a6 p7.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int isPrime(int n, int d) {
    // checks if inputed number is 1
    if ( n == 1) {
        return 0;
    }
    // this is the base case
    if (d == 1) {
        return 1;
    }
    /* checks that n is not
     divisble by the number below it */
    else if (n % d == 0) {
            return 0;
        } else {
           // recrusive function call
            return isPrime(n,d-1);
        }
    }

int main() {
    int n;
    // scans the number we want to count down
    scanf("%d", &n);
    /* checks our functions output and prints the
     corresponding meaning in this case
     if it returns 1 then its a prime
     else if it returns 0 its not */
    if (isPrime(n, n-1) == 1) {
        printf("%d", n);
        printf(" is prime\n");
    } else {
        printf("%d", n);
        printf(" is not prime\n");
    }
    return 0;
}




