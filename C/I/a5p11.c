/*
 JTSK-320111
 a5 p11.c
 Otmane Sabir o.sabir@jacobs-university.de
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int countinsensitive(char *str, char c) {
    int count = 0;
    // resets the string to its initial position
    while ( *str != '\0') {
        // turns all characters to lower case ones
        if ( *str >= 'A' && *str <= 'Z') {
            *str = tolower(*str);
        }
        /* if the characters matche
         then the counter increment */
        if ( *str == c ) {
            count++;
        }
        // increments the pointer's address
        str++;
    }
    return count;
}
int main() {
    char ch;
    // scans the character
    scanf("%c", &ch);
    getchar();
    // converts the character to a lower case
    char ch2 = tolower(ch);
    // dynamically allocating space for an array of char
    char *str;
    str = (char*) malloc(sizeof(char) * 50);
    //  scans the string
    scanf("%s", str);
    int count = 0;
    char *init;
    // saves the position of the initial pointer
    init = str;
    // counts the number of elements in the string
    while ( *str != '\0' ) {
        count++;
        str++;
    }
    // resets the pointer of str to its initial position
    str = init;
    char *dyn_str;
    // allocates the right space to the string
    dyn_str = (char*) malloc(sizeof(char) * count);
    // copies the first string to the second
    strcpy(dyn_str, str);
    /* prints the character
     and the number of its occurences */
    printf("The character '%c' occurs %d times.\n", ch, countinsensitive(dyn_str, ch2));
    // deallocates the memory
    free(str);
}


