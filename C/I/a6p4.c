/*
 JTSK-320111
 a6 p4.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

// function that divides all numbers in an array by 5

void divby5(float arr[], int size) {
    for ( int i = 0; i < size; i++ ) {
        arr[i] /= 5;
    }
}

int main() {
    int n;
    // scans the number of elements we want to enter
    scanf("%d", &n);
    float *arr;
    // allocates memeory to the string
    arr = (float*) malloc(sizeof(float) * n);
    // scans the values we want to diide by 5
    for (int i = 0; i < n ; i++) {
        scanf("%f", &arr[i]);
    }
    // calling function to change the array
    divby5(arr, n);
    // prints the array
    for ( int i = 0; i < n; i++ ){
        printf("%f ", arr[i]);
    }
    printf("\n");
    // deallocates memory
    free(arr);
}




