/*
 JTSK-320111
 a4 p9.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include <stdio.h>
#include <string.h>


int main() {
    char one[100];
    char two[100];
    char three[100];
    char keep[100];
    char c;
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    scanf("%c", &c);
    getchar();
    one[strlen(one) - 1]='\0';
    two[strlen(two) - 1]='\0';
    int len1 = (int) strlen(one);
    int len2 = (int) strlen(two);
    printf("length1=%d\n", len1);
    printf("length2=%d\n", len2);
    strcpy(keep, one);
    printf("concatenation=%s\n", strcat(keep, two));
    printf("copy=%s\n", strcpy(three, two));
    int cmp = strcmp(one, two);
    if ( cmp == 0 ) {
        printf("one is equal to two\n");
    } else if ( cmp < 0 ) {
        printf("one is smaller than two\n");
    } else if ( cmp > 0 ){
        printf("one is larger than two\n");
    }
    int i = 0;
    int j = 0;
    while ( i <= len2) {
        if ( c == two[i] ) {
            printf("position=%d\n", i);
            j++;
            i++;
        } if ( c != two[i] ) {
            i++;
        } if ( i >= len2 && j == 0 ) {
            printf("The character is not in the string\n");
            break;
        }
    }
}

