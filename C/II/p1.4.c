//
//  main.c
//  p1.4
//
//  Created by Otmane Sabir on 2/18/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    #define INTERMEDIATE "Intermediate"
    int n;
    scanf("%d", &n);
    int array1[n];
    int array2[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &array1[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &array2[i]);
    }
    int sum = 0;
    printf("The intermediate product values are:\n");
    #ifdef INTERMEDIATE
    for (int i = 0; i < n; i++){
        printf("%d\n", array1[i]*array2[i]);
        sum += array1[i]*array2[i];
    }
    printf("The scalar product is: %d\n", sum);
    #endif
}
