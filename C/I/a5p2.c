
//
//  lab.c
//  a5 p2.c
//  Otmane Sabir
//  o.sabir@jacobs-university.de
//
#include <stdio.h>
#include <string.h>

int main() {
    char arr[50];
    // reads the array from the keyboard
    fgets(arr, sizeof(arr), stdin);
    int len = (int) strlen(arr);
    int i = 0;
    while ( i < len - 1 ) {
        // checks if the index is pair or impair to add space
        if ( i%2 != 0 ) {
            printf(" %c\n",arr[i]);
        } else if ( i%2 == 0 ){
            printf("%c\n",arr[i]);
        }
        i++;
    }
}
