/*
 JTSK-320111
 p17.c
 Otmane Sabir
 o.sabir@jacobs-university.de
 */
#include <stdio.h>
#include <math.h>
unsigned char set3bits(unsigned char c, int idx1, int idx2, int idx3){
    c |= 1 << idx1;
    c |= 1 << idx2;
    c |= 1 << idx3;
    return c;
}

int main(int argc, char** argv){
    unsigned char c;
    //reading
    scanf("%c", &c);
    int b1, b2, b3;
    scanf("%d", &b1);
    scanf("%d", &b2);
    scanf("%d", &b3);
    
    // pirnt the decimal
    printf("The decimal representation is: %d\n", c);
    //printing start
    //in the backward order
    printf("The binary representation is: ");
    char bin[9];
    for(int i = 0; i < 8; i++){
        if(c & 1 << i)
            bin[7 - i] = '1';
        else
            bin[7 - i] = '0';
    }
    bin[8] = '\0'; // make sure it terminates
    printf("%s\n", bin);
    
    // change bits and print
    unsigned char changed = set3bits(c, b1, b2, b3);
    printf("After setting the bits: ");
    for(int i = 0; i < 8; i++){
        if(changed & 1 << i)
            bin[7 - i] = '1';
        else
            bin[7 - i] = '0';
    }
    bin[8] = '\0'; // make sure it terminates
    printf("%s\n", bin);
    
    return 0;
}
