/*
 JTSK-320111
 practice_sheet_p7.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
// a, e, i, o, u

int substitute_vowels(char *s, char ch) {
    int count = 0;
    while ( *s != '\0' ) {
        if ( *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' ) {
            *s = ch;
            count++;
            s++;
        } else {
            s++;
        }
    }
return count;
}
int main() {
    char arr[50] = "This is a sentence";
    char ch = 'o';
    int count = substitute_vowels(arr, ch);
    printf("%s\n", arr);
    printf("%d\n", count);
    
}

