//
//  main.cpp
//  Counting Sort
//
//  Created by Otmane Sabir on 3/24/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.



#include <iostream>



void arr_print(int *arr, int size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}


void count_sort(int *arr, int size){
    int size2 = 10;
    int *pos_saver;
    pos_saver = new int(size2);
    int *final_arr;
    final_arr = new int(size);
    for (int i = 0; i < size2; i++){
        pos_saver[i] = 0;
    }
    for (int i = 0; i < size; i++){
        pos_saver[arr[i]]++;
    }
    for (int i = 0; i < size2; i++){
        pos_saver[i+1] += pos_saver[i];
    }
    for (int i = 0; i < size; i++){
        final_arr[pos_saver[arr[i]]-1] = arr[i];
        pos_saver[arr[i]]--;
    }
    for (int i = 0; i < size; i++){
        arr[i] = final_arr[i];
    }
}


int main(int argc, const char * argv[]) {
    int size = 7;
    int arr[7] = {1, 4, 1, 2, 7, 5, 2};
    count_sort(arr, size);
    arr_print(arr, size);
    return 0;
}

