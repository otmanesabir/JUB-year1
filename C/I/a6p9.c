/*
 JTSK-320111
 a6 p9.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    // declares arrays we want to scan
    char arr[100];
    char arr2[100];
    double num1, num2;
    // scans the file names
    scanf("%s\n",arr);
    scanf("%s",arr2);
    FILE *ptr;
    FILE *ptr2;
    // opens the files the user called
    ptr = fopen(arr, "r+");
    if (ptr == NULL) {
        printf("Cannot open file!\n");
        exit(1);
        }
    ptr2 = fopen(arr2, "r+");
    if (ptr2 == NULL) {
        printf("Cannot open file!\n");
        exit(1);
    }
    // scans the numbers from the files
    fscanf(ptr, "%lf", &num1);
    fscanf(ptr2, "%lf", &num2);
    double sum, diff, prod, div;
    // computes every operation to a variable
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1*num2;
    div = num1/num2;
    FILE *rsl;
    // creates a result text and opens it
    rsl = fopen("result.txt", "w+");
    // prints all the values to the file
    fprintf(rsl, "%lf\n", sum);
    fprintf(rsl, "%lf\n", diff);
    fprintf(rsl, "%lf\n", prod);
    fprintf(rsl, "%lf\n", div);
    // closes the files
    fclose(ptr);
    fclose(ptr2);
    fclose(rsl);
    return 0;
}




