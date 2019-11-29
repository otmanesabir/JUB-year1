//
//  main.c
//  proginCI
//  Problem 1.3
//  Created by Otmane Sabir on 9/13/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <stdio.h>
int main() {
    float result;
    int a = 5;
    float b = 13.5;
    result = a / b;
    printf("The result is %f\n", result);
// first the variable b has a 13.5 value which is a float in this case and not an integer thus we're required to change its data type. The printf statement also uses the wrong formatting specification (%d) but in this case we want to use a float so (%f)
    return 0;
}



