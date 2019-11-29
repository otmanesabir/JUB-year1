/*
 JTSK-320111
 a5 p3.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int count_consonants(char str[] ) {
    // gets the string length
    int len = (int) strlen(str);
    int count = 0;
    // check if the entered character is in the alphabet
    for ( int i = 0; i < len; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
    // checks it the character is not a vowel
            if ( str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'
                && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
            {
                count++;
            }
        }
}
    printf("Number of consonants=%d\n", count);
    return 0;
}
int main() {
    // condition that keeps the loop running
    char str[100];
    while (1) {
    // scans the string
        fgets(str, sizeof(str), stdin);
        if ( str[0] != '\n') {
            count_consonants(str);
         }
        else
        {
            break;
        }
    }
}


