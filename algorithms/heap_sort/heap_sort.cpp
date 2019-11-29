//
//  main.cpp
//  ADS #4
//
//  Created by Otmane Sabir on 3/6/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int heap_size;


void heapify(int arr[], int n, int i){
    int largest = i;
    int l = 2*i;
    int r = 2*i + 1;
    
    if (l < n && arr[l] > arr[largest])
        largest = l;
    else largest = i;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        
        heapify(arr, n, largest);
    }
}
void build_heap(int arr[], int n){
    heap_size = n;
    for (int i = n/2-1 ; i >= 0; i--)
        heapify(arr, n, i);
}
void heapSort(int arr[], int n){
    build_heap(arr, n);
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heap_size--;
        heapify(arr, i, 0);
    }
}


void print_Array(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    int size = rand()%20+10;
    int arr[size];
    for (int i = 0; i < size; i ++) {
        arr[i] = rand()%100;
        
    }
    heapSort(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
