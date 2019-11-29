//
//  main.cpp
//  Bucket Sort
//
//  Created by Otmane Sabir on 3/25/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//


#include <iostream>
#include <vector>


void BucketSort(float *arr, int size){
    std::vector<float> bucket[size];
    for (int i = 0; i < size; i++){
        int idx = arr[i]*size;
        bucket[idx].push_back(arr[i]);
    }
    for (int i = 0; i < size; i++){
        std::sort(bucket[i].begin(), bucket[i].end());
    }
    int idx = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < bucket[i].size(); j++){
            arr[idx++] = bucket[i][j];
        }
    }
    
}

void print_arr(float *arr, int size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}


int main(int argc, const char * argv[]) {
    float arr[7] = {0.9, 0.1, 0.6, 0.7, 0.6, 0.3, 0.1};
    int size = 7;
    BucketSort(arr, size);
    print_arr(arr, size);
    return 0;
}
