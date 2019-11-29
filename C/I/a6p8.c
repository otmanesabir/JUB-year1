/*
 JTSK-320111
 a6 p8.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char ch;
    int asc;
    int sum = 0;
    // assigns a pointer to the file
    fptr = fopen("chars.txt", "r+");
if (fptr == NULL) {
        printf("Cannot open file!\n");
        exit(1);
    }
    // loop to read first two characters
    for ( int i = 0; i < 2; i++) {
        ch = getc(fptr);
        asc = (int) ch;
        sum += asc;
    }
    FILE *fptr2;
    // assigns a pointer to a new created file
    fptr2 = fopen("codesum.txt", "w+");
    if (fptr == NULL) {
        printf("Cannot open file!\n");
        exit(1);
    }
    // prints the value to the new created file
    fprintf(fptr2, "%d" ,sum);
    fclose(fptr);
    fclose(fptr2);
}




