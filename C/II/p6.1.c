/*
 JTSK-320111
 p44.c
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <stdio.h>

int isSeperator(char c){
    // check for seperator
    switch(c){
        case ' ':
        case ',':
        case '?':
        case '!':
        case '.':
        case '\t':
        case '\r':
        case '\n':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}
int main(int argc, char** argv){
    char fname[100];
    // gets name of the file
    fgets(fname, sizeof(fname), stdin);
    for(int i = 0; i < 100; i++){
        if(fname[i] == '\n')
            fname[i] = '\0';
    }
    // opens file
    FILE* file_name = fopen(fname, "r");
    int count = 0;
    char ch;
    char prevChar = '\n';
    while((ch = getc(file_name)) != EOF){
        if(isSeperator(ch) && !isSeperator(prevChar))
            count++;
        prevChar = ch;
    }
    printf("The file contains %d words.\n", count);
    fclose(file_name);
    return 0;
}
