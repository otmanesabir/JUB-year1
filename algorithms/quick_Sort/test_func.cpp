//
//  test_func.cpp
//  Quick_Sort
//
//  Created by Otmane Sabir on 3/12/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "test_funcs.hpp"

/* Insertion sort function
 that's used with the median of three */

void InsertionSort(int *arr, int size){
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

// Lomoto partition function

int lomoto_part(int arr[], int p, int q){
    int pivot = arr[q];
    int i = (p - 1);
    
    for (int j = p; j <= q- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[q]);
    return (i + 1);
}

// Hoare's partition function

int hoare_part(int *arr, int p, int q){
    int pivot = arr[p];
    int i = p - 1, j = q + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        
        std::swap(arr[i], arr[j]);
    }
}

// Median of three function

int median_of_three(int *arr, int p, int r){
    int mid = (p+r)/2;
    
    if (arr[mid] < arr[p]){
        std::swap(arr[mid], arr[p]);
    }
    if (arr[r] < arr[p]){
        std::swap(arr[p], arr[r]);
    }
    if (arr[r] < arr[mid]){
        std::swap(arr[r], arr[mid]);
    }
    std::swap(arr[mid], arr[r-1]);
    int pivot = arr[r - 1];
    int lp = p;
    int rp = r - 1;
    while (true) {
        while(arr[++lp] < pivot)
            ;
        while (arr[--rp] > pivot)
            ;
        if (lp >= rp){
            break;
        } else {
            std::swap(arr[lp], arr[rp]);
        }
    }
    std::swap(arr[lp], arr[r - 1]);
    return lp;
}

// QuickSort Function using lomoto's partition

void QuickSort(int *arr, int p, int r){
    if (p < r){
        int q = lomoto_part(arr, p, r);
        QuickSort(arr, p, (q - 1));
        QuickSort(arr, (q + 1), r);
    }
}

// QuickSort function using hoare's partition

void QuickSort_H(int arr[], int p, int r){
    if (p < r){
        int q = hoare_part(arr, p, r);
        QuickSort_H(arr, p, q);
        QuickSort_H(arr, q + 1, r);
    }
}

// QuickSort function using median of three partition

void QuickSort_MOT(int *arr, int p, int r){
    if (p < r){
        int i = median_of_three(arr, p, r);
        QuickSort_MOT(arr, p, i - 1);
        QuickSort_MOT(arr, i + 1, r);
    }
}

// Helper function to print the arrays

void array_printer(int *arr, int size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// Function that tests on a single array

void test_func(void (*f)(int *arr, int p, int r)){
    int size = 20;
    int arr[size];
    std::cout << "Array :" << std::endl;
    for (int i = 0; i < size; i++){
        arr[i] = rand()%100;
    }
    array_printer(arr, size);
    f(arr, 0, size-1);
    std::cout << "Sorted array :" << std::endl;
    array_printer(arr, size);
}

/* Function that calculates total and averga running time
 of the function for 100000 arrays and outputs to file */

void average_test(std::string &name){
    std::ofstream test;
    int size = 1000;
    double sum = 0;
    test.open(name);
    for (int i = 0; i < 100000; i++){
        int arr[size];
        for (int j = 0; j < size; j++){
            arr[j] = rand()%1000;
        }
        clock_t tStart = clock();
        QuickSort(arr, 0, size-1);
        clock_t tEnd = clock();
        sum += (tEnd - tStart);
    }
    test << "QuickSort w/ Lomoto Partition:\nFor 100000 arrays : " << (double)(sum/CLOCKS_PER_SEC) << " secs" << std::endl;
    test << "Average : " << std::fixed << (double)((sum/CLOCKS_PER_SEC)/100000) << " secs" << std::endl;
    sum = 0; // initalize sum to 0 again
    for (int i = 0; i < 100000; i++){
        int arr[size];
        for (int j = 0; j < size; j++){
            arr[j] = rand()%1000;
        }
        clock_t tStart = clock();
        QuickSort_H(arr, 0, size-1);
        clock_t tEnd = clock();
        sum += (tEnd - tStart);
    }
    test << "QuickSort w/ Hoare's Partition:\nFor 100000 arrays : " << (double)(sum/CLOCKS_PER_SEC) << " secs" << std::endl;
    test << "Average : " << std::fixed << (double)((sum/CLOCKS_PER_SEC)/100000) << " secs\n";
    sum = 0; // initalize sum to 0 again
    for (int i = 0; i < 100000; i++){
        int arr[size];
        for (int j = 0; j < size; j++){
            arr[j] = rand()%1000;
        }
        clock_t tStart = clock();
        QuickSort_MOT(arr, 0, size-1);
        clock_t tEnd = clock();
        sum += (tEnd - tStart);
    }
    test << "QuickSort w/ Median of Three:\nFor 100000 arrays : " << (double)(sum/CLOCKS_PER_SEC) << " secs" << std::endl;
    test << "Average : " << std::fixed << (double)((sum/CLOCKS_PER_SEC)/100000) << " secs\n";
}


/* Test function that generates array of different array ranges alongside with
the time it took to complete the sorting and outputs it to a file */

void plotting_test(void (*f)(int *arr, int p, int r), std::string &name){
    int mult = 100;
    std::ofstream plot_test;
    plot_test.open(name);
    for (int k = 0; k < 3; k++){
        for (int i = 0; i < mult; i++){
            int size = rand()%mult;
            int arr[size];
            for (int j = 0; j < size; j++){
                arr[j] = rand()%mult;
            }
            clock_t tStart = clock();
            f(arr, 0, size-1);
            clock_t tEnd = clock();
            plot_test << size << "," << std::fixed <<(double)(tEnd-tStart)/CLOCKS_PER_SEC << std::endl;
    }
        mult *= 10;
    }
}
