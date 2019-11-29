/*
 JTSK-320111
 a3 p9.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>

int main() {
    char c;
    int n;
    double arr[100];
    int j = 0;
    scanf("%c", & c);
    getchar();
    scanf("%d", & n);
    while (j < n) {
        scanf("%lf", & arr[j]);
        j++;
    }
    switch (c) {
        case 's':
            j = 0;
            double sum = 0;
            while (j < n) {
                sum += arr[j];
                j++;
            }
            printf("%lf\n", sum);
            break;
        case 'p':
            j = 0;
            while (j < n) {
                printf("%lf\n", arr[j]);
                j++;
            }
            break;
        case 't':
            j = 0;
            while (j < n) {
                printf("%lf\n", (arr[j]) * 9 / 5 + 32);
                j++;
            }
            break;
        default:
            j = 0;
            sum = 0;
            while (j < n) {
                sum += arr[j];
                j++;
            }
            printf("%lf\n", sum / n);
            break;
    }
    }
