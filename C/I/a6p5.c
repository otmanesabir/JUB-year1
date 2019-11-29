/*
 JTSK-320111
 a6 p5.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>


// function that returns the scaler product

double scal_prod(double arrx[], double arry[], int n) {
    double sum = 0;
    for ( int i = 0; i < n; i++) {
        sum += arrx[i]*arry[i];
    }
    printf("Scalar product=%lf\n", sum);
    return 0;
}

/* funtion that compares the values
 and extracts both the biggest and the smallest */

double cmp(double arrx[], double arry[], int n) {
    double sml = arrx[0];
    double lrg = arrx[0];
    double sml1 = arry[0];
    double lrg1 = arry[0];
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    /* loop that finds the smallest and biggest in the second vector */
    for ( int i = 0; i < n; i++) {
        if ( sml > arrx[i] ) {
            sml = arrx[i];
            count1 = i;
        }
        if ( lrg < arrx[i] ) {
            lrg = arrx[i];
            count2 = i;
        }
    }
    /* loop that finds the smallest
     and biggest in the second vector */
    for ( int i = 0; i < n; i++) {
        if ( arry[i] < sml1 ) {
            sml1 = arry[i];
            count3 = i;
        }
        if ( arry[i] > lrg1 ) {
            lrg1 = arry[i];
            count4 = i;
        }
    }
    // prints the required values
    printf("The smallest = %lf\n", sml);
    printf("Position of smallest = %d\n", count1);
    printf("The largest = %lf\n", lrg);
    printf("Position of largest = %d\n", count2);
    printf("The smallest = %lf\n", sml1);
    printf("Position of smallest = %d\n", count3);
    printf("The largest = %lf\n", lrg1);
    printf("Position of largest = %d\n", count4);
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    double *arrx;
    double *arry;
    // allocates memory to array
    arrx = (double*) malloc(sizeof(double) * n);
    arry = (double*) malloc(sizeof(double) * n);
    // scans values of the first vector
    for ( int i = 0; i < n; i++) {
        scanf("%lf", &arrx[i]);
    }
    // scans values of the seocnd vector
    for ( int i = 0; i < n; i++) {
        scanf("%lf", &arry[i]);
    }
    // calling product and comparasion funtions
    scal_prod(arrx, arry, n);
    cmp(arrx, arry, n);
    // deallocates memory
    free(arrx);
    free(arry);
}




