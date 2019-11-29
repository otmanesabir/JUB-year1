/*
 JTSK-320111
 a3 p7.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>


int main() {
    char ch;
    int n;
    scanf("%c", &ch);
    scanf("%d", &n);
    while ( n > 0 ) {
        printf("%c\n", ch);
        ch--;
        n--;
    }
}

