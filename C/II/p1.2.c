//
//  main.c
//  p1.2
//
//  Created by Otmane Sabir on 2/18/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <stdio.h>

#define TO_DECIMAL(A) printf("%d\n", A)
#define LEAST_S_BIT(A) printf("%d\n", (A & 1))

int main(int argc, const char * argv[]) {
    unsigned char ch;
    scanf("%c", &ch);
    TO_DECIMAL(ch);
    LEAST_S_BIT(ch);
    return 0;
}
