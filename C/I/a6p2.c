/*
 JTSK-320111
 a6 p2.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>

//     function that prints and divides by 5 an array
void divby5(float arr[], int size) {
//     prints the array before the division
        printf("Before:\n");
    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i]);
    }
        printf("\n");
        printf("After:\n");
//     prints the array after the division
    for (int i = 0; i < size; i++) {
        printf("%.3f ", arr[i] / 5);
    }
        printf("\n");
}
int main() {
    int size = 6;
    float arr[] = {5.5,6.5,7.75,8.0,9.6,10.36};
    divby5(arr, size);
}
