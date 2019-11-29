/*
 JTSK-320111
 a3 p8.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>

int main() {
    char ch;
    int n;
    scanf("%c", &ch);
    scanf("%d", &n);
    int asc;
    asc = (int) ch;
    /* checks if the character is a lowercase
     alphabetic character */
    if (asc < 97 || asc > 122) {
        printf("Please enter a lower case character\n");
    }
    /* checks if the inputed number is smaller
     than 7 and bigger than 32 */
    if (n < 7 || n > 32) {
        printf("Please enter a number between 7 and 32\n");
    }
    if ((asc >= 97 && ch <= 122) && (n >= 7 && n <= 32)) {
        while (n > 0) {
            printf("%c\n", ch);
            ch--;
            n--;
        }
    }
}
