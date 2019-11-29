/*
 JTSK-320111
 a5 p8.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
                                            // UNIFINISHED //
void print_mat (int n, int matrix[n][n])
{
    printf("The entered matrix is:\n");
    for ( int i=0; i < n; i++ )
    {
        for ( int j=0; j < n; j++ )
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
        }
}
void main_diag ( int n, int arr[n][n]) {
    printf("Under the main diagonal:\n");
    int lim = n - 1;
    for ( int i = 1; i < n; i++ ) {
        int j = n - 1;
        while ( j >= lim) {
            printf("%d ", arr[i][j]);
            j--;
        }
        lim--;
    }
    printf("\n");
}


int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
        {
            for ( int j = 0; j < n; j++)
            {
                scanf  ("%d", &arr[i][j]);
            }
        }
    print_mat(n, arr);
    main_diag(n, arr);
}



