/*
 JTSK-320111
 a4 p5.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>
void sum_of_all(int j, float arr[]) {
    float sum = 0;
    int x = 0;
    while ( x <= j ) {
    sum += arr[x];
        x++;
    }
    printf("%f\n", sum);
}
void aver(int j, float arr[]) {
    float sum = 0;
    int x = 0;
    while ( x <= j ) {
        sum += arr[x];
        x++;
    }
    float avr = sum / (j+1);
    printf("%f\n", avr);
}

int main() {
    float arr[10];
    int j = 0;
    while ( j < 10 ) {
        scanf("%f", &arr[j]);
        if (arr[j] == -99.0) {
            j--;
            sum_of_all(j, arr);
            aver(j, arr);
            break;
        } else if ( j == 9) {
            sum_of_all(j, arr);
            aver(j, arr);
        }
        j++;
    }
}
