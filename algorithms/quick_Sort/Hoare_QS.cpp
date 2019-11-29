//
//  Hoare_QS.cpp
//  Quick_Sort
//
//  Created by Otmane Sabir on 3/12/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include "test_funcs.h"

int hoare_part(int *arr, int p, int q){
    int x = arr[p];
    int i = p - 1;
    int j = q + 1;
    while(1){
        do { i++; }
        while (arr[i] <= x );
        do { j--; }
        while (arr[j] <= x);
        if ( i >= j){
            return j;
        }
        std::swap(arr[i], arr[j]);
    }
}

int main(){
    test_func(hoare_part);
}



