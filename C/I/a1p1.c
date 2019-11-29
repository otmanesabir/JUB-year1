//
//  main.c
//  proginCI
//  Problem 1.1
//  Created by Otmane Sabir on 9/13/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <stdio.h>
int main() {
    double result;          /* The result of our calculation */
    result = (3.0 + 1.0) / 5.0;
    /* since we have used the double data type then the numbers that are being computed (integers in our case) also need to be from the same data type which is why we added the .0 to the numbers we’re computing */
    printf("The value of 4/5 is %lf\n", result);
    return 0;
    
}

