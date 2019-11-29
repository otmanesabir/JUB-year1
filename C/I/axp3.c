/*
 JTSK-320111
 practice_sheet_p3.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int n;
    int *arr;
    FILE *s_file;
    s_file = fopen("/Users/otmanesabir/Desktop/squares.txt", "w+");
    if ( s_file == NULL ) {
        printf("Could not open file\n");
        exit(1);
    }
    scanf("%d", &n);
    arr = (int*) malloc(sizeof(int) * n);
    if ( arr == NULL )
        exit(1);
    for ( int i = 0; i < n; i++ ){
        scanf("%d", &arr[i]);
    }
    for ( int j = n - 1; j >= 0; j--) {
        fprintf(s_file, "%d", arr[j]);
        arr[j] = pow(arr[j], 2);
        fprintf(s_file, " %d\n", arr[j]);
    }
}




