/*
 JTSK-320111
 a5 p9.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prodminmax(int arr[], int n) {
    int sml = arr[0];
    int lrg = arr[0];
    for ( int i = 0; i < n; i++ ) {
//  checks if the current array value is the samllest
        if ( arr[i] < sml ) {
            sml = arr[i];
        }
//  checks if the current array value is the largest
        if ( arr [i] > lrg ) {
            lrg = arr[i];
        }
    }
//  computes the product of the largest and smallest values
    int prod = lrg*sml;
// returns the value
    return prod;
}

int main() {
    int n;
    int *arr;
    scanf("%d", &n);
//  allocates the dynamic memory to the array
    arr = (int*) malloc (sizeof(int) * n);
    if ( arr == NULL )
        exit(1);
// scans the array
    for ( int i = 0; i < n; i++ ) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", prodminmax(arr, n));
//  deallocates the dynamic memory
    free(arr);
}



