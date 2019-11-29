//
//  main.cpp
//  all_in_one
//
//  Created by Otmane Sabir on 3/1/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <fstream>
#include <stdlib.h>

using namespace std;

const int MAX = 1000;
int f[MAX];

// Fibonucci sequence calc

int fib_recursive(int n){
    if ( n < 2) return n;
    else return fib_recursive(n-1)+fib_recursive(n-2);
}
int fib_bottomUp(int n){
    if (n < 2) return n;
    else {
        int oneBehind = 1;
        int twoBehind = 0;
        int fib = 0;
        for (int i = 1; i < n; i++){
            fib = oneBehind+twoBehind;
            twoBehind = oneBehind;
            oneBehind = fib;
        }
        return fib;
    }
}
int fib_ClosedNum(int n){
    int cn = ((1+sqrt(5))/2);
    int result = round(pow(n, cn)/sqrt(5));
    return result;
}
int fib_MatrixRep(int n){
    // Base case
    if (n == 0) return 0;
    if (n == 1 || n == 2) return (f[n] = 1);
    if (f[n]) return f[n];
    // Matrix rep
    int res = (n & 1)? (n+1)/2 : n/2;
    f[n] = (n & 1)? (fib_ClosedNum(res)*fib_ClosedNum(res) + fib_ClosedNum(res-1)*fib_ClosedNum(res-1)) : (2*fib_ClosedNum(res-1) + fib_ClosedNum(res))*fib_ClosedNum(res);
    return f[n];
}

// Random sequence generators

int* random_sequence_gen(){
    int size = 1000;
    int *arr = new int(size);
    for (int i = 0; i < size; i++){
        arr[i] = rand()%1000;
    }
    return arr;
}
void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        
        /* Move elements of arr[0..i-1], that are
         greater than key, to one position ahead
         of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
int* random_fib(){
    int size = 1000;
    int *arr = random_sequence_gen();
    insertionSort(arr, size);
    return arr;
}

int main(int argc, const char * argv[]) {
    int *arr = random_fib();
    clock_t t;
    ofstream myfile;
    myfile.open("/Users/otmanesabir/Desktop/Matrix_Rep_test.txt");
    for (int i = 0; i < 1000; i++){
        t = clock();
        fib_MatrixRep(arr[i]);
        t = clock() - t;
        if ( ((float)t)/CLOCKS_PER_SEC > 50 ) break;
        myfile << arr[i] << "," << ((float)t)/CLOCKS_PER_SEC << endl;
    }
    myfile.close();
    return 0;
}


