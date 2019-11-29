/*
 JTSK-320111
 a5 p6.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_two( int arr[], int n ) {
    int grt1 = arr[0];
    int grt2 = arr[0];
//  Starts traversing the array
    for ( int i = 0; i < n; i++) {
        /* if the value is bigger then the stored one
        then update both values accordingly */
        if ( arr[i] > grt1 ) {
            grt2 = grt1;
            grt1 = arr[i];
        }
        /* If the current value is different from
         the greates one and bigger than the second
         then update second */
        else if ( arr[i] > grt2 && arr[i] != grt1 ) {
            grt2 = arr[i];
            }
        }
    // prints the two greatest values
    printf("The greatest number is: %d\n", grt1);
    printf("The second greatest number is: %d\n", grt2);
    return 0;
}


int main() {
    int *arr, n;
    scanf("%d", &n);
    // allocates memory for an array of integers
    arr = (int*) malloc(sizeof(int) * n);
    if (arr == NULL)
        exit(1);
    // scans values of the array
    for ( int i = 0; i < n; i++ ) {
        scanf("%d", &arr[i]);
    }
    find_two(arr, n);
    // frees the allocated memory
    free(arr);
}



