//
//  main.c
//  p1.1
//
//  Created by Otmane Sabir on 2/18/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <stdio.h>

int temp = 0;
#define SWAP(A, B, temp) {temp = A; A = B; B = temp;}

int main(int argc, const char * argv[]) {
    int a, b;
    float c, d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    SWAP(a, b, temp);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%f\n", c);
    printf("%f\n", d);
    return 0;
}
