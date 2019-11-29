//
//  lomoto_partition.cpp
//  Quick_Sort
//
//  Created by Otmane Sabir on 3/12/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include "partitions.hpp"


int lomoto_part(int *arr, int p, int q){
    int x = arr[p];
    int i  = p;
    for (int j = p+1; j <= q; j++){
        if (arr[j] <= x ){
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i], arr[p]);
    return i;
}

int hoare_part(int *arr, int p, int q)
{
    int pivot = arr[p];
    int i = p - 1, j = q + 1;
    
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        
        // Find rightmost element smaller than
        // or equal to pivot
        do
        {
            j--;
        } while (arr[j] > pivot);
        
        // If two pointers met.
        if (i >= j)
            return j;
        
        std::swap(arr[i], arr[j]);
    }
}
