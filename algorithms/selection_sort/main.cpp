//
//  main.cpp
//  insertionsort
//
//  Created by Otmane Sabir on 2/7/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <array>
#include <cstdlib>
#include <time.h>
#include <fstream>

using namespace std;

// Function to find minimum

int min_finder(int *arr, int firstidx, int size){
    int min = arr[firstidx];
    int idx = firstidx;
    for (int i = firstidx; i < size; i++){
        if ( arr[i] < min ){
            min = arr[i];
            idx = i;
        }
    }
    return idx;
}

// selection sort algorithm

void selection_sort(int *arr, int size){
    int smallestidx;
    for (int lim = 0; lim < size; lim++){
        smallestidx = min_finder(arr, lim, size);
        swap(arr[lim], arr[smallestidx]);
    }
}

// generates worst case arrays

void worstcase(int *arr, int size){
    selection_sort(arr, size);
    int j = size-1;
    for (int i = 0; i < (size/2); i++){
        swap(arr[i], arr[j]);
        j--;
    }
}

// generates best case arrays

void bestcase(int *arr, int size){
    selection_sort(arr, size);
}

// randomly generates arrays and saves all of the array sizes and runtime in a file

void random_generator(void function(int *arr, int size)){
    ofstream outfile ("/Users/otmanesabir/Desktop/random_cases.txt");
    int mult = 1;
    for (int j = 0; j < 3; j++){
        mult = mult*10;
        for (int i = 0; i < mult; i++){
            int size = rand()%mult;
            int array[size][size];
            for (int j = 0; j < size; j++){
                for (int i = 0; i < size; i++){
                    array[j][i] = rand()%mult;
                }
            }
            for (int i = 0; i < size; i++){
                function(array[i], size);
            }
            clock_t tStart = clock();
            for (int j = 0; j < size; j++){
                selection_sort(array[j], size);
            }
            outfile << size << "," << (double)(clock() - tStart)/CLOCKS_PER_SEC << endl;
        }
    }
    outfile.close();
}

// Shows the steps of the algorithm

int main() {
    int size = rand()%100+10;
    int arr[size];
    for (int i = 0; i < size; i++){
        arr[i] = rand()%100+10;
    }
    selection_sort(arr, size);
    cout << "Array after sorting : " << endl << "[";
    for (int i = 0; i < size; i++){
        cout << " " << arr[i];
    }
    cout << " ]" << endl;
    return 0;
}
