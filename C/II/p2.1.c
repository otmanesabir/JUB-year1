/*
 JTSK-320111
 p1.c
 Otmane Sabir
 o.sabir@jacobs-university.de
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    char buf[100];
    //reading
    int num;
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &num);
    
    float* darr = (float*) malloc(sizeof(float) * num);
    float* ptr_idx = darr;
    
    //reading the array
    for(int i = 0; i < num; i++){
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%f", darr + i);
    }
    //calculating
    while(num--){
        if(*ptr_idx < 0.0)
            break;
        ptr_idx++;
    }
    printf("Before the first negative value: %ld elements\n", ptr_idx - darr);
    free(darr);
}
