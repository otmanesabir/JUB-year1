/*
 JTSK-320111
 practice_sheet_p4.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int binaryToDecimal (int b[]) {
    int i = 0;
    int sum= 0;
    while (b[i] == 1 || b[i] == 0) {
        sum = pow(2, i)*b[i] + sum;
        i++;
    }
    return sum;
}

int main() {
    
    int arr[8] = {1, 0, 1, 0, 1, 1, 1, 2};
    printf("%d\n", binaryToDecimal(arr));
    return 0;
}
// 1 2 4 8 16 32 64 128 256 512
