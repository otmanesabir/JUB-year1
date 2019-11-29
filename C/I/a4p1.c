/*
 JTSK-320111
 a4 p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>
int position(char str[], char c)
{
    /* Loop until end of string */
    for (int idx = 0;str[idx] != '\0'; idx++) {
        /* checks if the current character in the string
         is the one we're looking for*/
        if (str[idx] == c) {
            return idx; }
}
    return 0;
}
    int main() {
        char line[80];
        while (1) {
            printf("Enter string:\n");
            fgets(line, sizeof(line), stdin);
            printf("The first occurrence of ’g’ is: %d\n", position(line, 'g'));
        }
    }

