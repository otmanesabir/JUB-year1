//
//  main.cpp
//  test_function.cpp
//
//  Created by Otmane Sabir on 3/7/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "functions.h"

void test_generator(){
    ofstream outfile ("/Users/otmanesabir/Desktop/variant_hs.txt");
    int mult = 10;
    for (int k = 0; k < 3; k++){
        for (int i = 0; i < 200; i++){
            int size = rand()%(mult*10) + 10;
            int arr[size];
            for (int i = 0; i < size; i++){
                arr[i] = rand()%50*mult;
            }
            clock_t tStart = clock();
            heapSort_var(arr, size);
            outfile << size << "," << (double)(clock() - tStart)/CLOCKS_PER_SEC << endl;
        }
        mult = mult*10;
    }
}

void comparasion(){
    ofstream outfile ("/Users/otmanesabir/Desktop/comparator.txt");
    double time1, time2;
    int mult = 10;
    for (int k = 0; k < 5; k++){
        int count1 = 0;
        int count2 = 0;
        int equal = 0;
        outfile << "Range " << k << endl;
        for (int i = 0; i < 5000; i++){
            int size = rand()%mult;
            int arr[size];
            for (int i = 0; i < size; i++){
                arr[i] = rand()%10*mult;
            }
            clock_t tStart = clock();
            heapSort(arr, size);
            time1 = (double)(clock() - tStart)/CLOCKS_PER_SEC;
            clock_t tStart2 = clock();
            heapSort_var(arr, size);
            time2 = (double)(clock() - tStart2)/CLOCKS_PER_SEC;
            if (time1 > time2) count1++;
            if (time2 > time1) count2++;
            if (time1 == time2) equal++;
        }
        outfile << "Total comparasions : " << 5000 << endl;
        outfile << "Heap sort : " << count1 << endl;
        outfile << "Heap sort variant : " << count2 << endl;
        outfile << "Equal times : " << equal << endl;
        mult *= 10;
    }
}


int main(int argc, const char * argv[]) {
    comparasion();
}
