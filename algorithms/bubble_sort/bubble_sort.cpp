//
//  main.cpp
//  bubble_sort
//
//  Created by Otmane Sabir on 3/7/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>

void bubble_sort(int *arr, int n){
    
    bool swap_check;
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        swap_check = false;
        for (j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1] ){
                std::swap(arr[j], arr[j+1]);
                swap_check = true;
            }
        }
            if (swap_check == false)
                break;
    }
}


void print_array(int *arr, int size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main(int argc, const char * argv[]) {
    int size = rand()%100+50;
    int arr[size];
    for (int i = 0; i < size; i++){
        arr[i] = rand()%1000;
    }
    bubble_sort(arr, size);
    print_array(arr, size);
    return 0;
}
