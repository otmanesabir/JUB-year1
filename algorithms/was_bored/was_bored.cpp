//
//  main.cpp
//  Special Algorithm
//
//  Created by Otmane Sabir on 3/25/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <vector>

void print_arr(int *arr, int size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void count_sort(int *arr, int size, int range){
    int size2 = range;
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

int binarySearchCount(int arr[], int n, int key)
{
    int left = 0, right = n;
    
    int mid = 0;
    while (left < right)
    {
        mid = (right + left) >> 1;
        
        // Check if key is present in array
        if (arr[mid] == key)
        {
            // If duplicates are present it returns
            // the position of last element
            while (mid+1<n && arr[mid+1] == key)
                mid++;
            break;
        }
        
        // If key is smaller, ignore right half
        else if (arr[mid] > key)
            right = mid;
        
        // If key is greater, ignore left half
        else
            left = mid + 1;
    }
    
    // If key is not found in array then it will be
    // before mid
    while (mid > -1 && arr[mid] > key)
        mid--;
    
    // Return mid + 1 because of 0-based indexing
    // of array
    return mid + 1;
}

int main(int argc, const char * argv[]) {
    int range = 2000;
    int n = 100;
    int arr[n];
    int i = 0;
    int a, b;
    a = 224;
    b = 1000;
    while(i < n){
        int value = rand();
        if (value < range){
            arr[i] = value;
            i++;
        } else {
            // do nothing
        }
    }
    count_sort(arr, n, range);
    int idx2 = binarySearchCount(arr, n, a);
    int idx = binarySearchCount(arr, n, b);
    int count = idx - idx2;
    std::cout << count << "\n";
    return 0;
}
