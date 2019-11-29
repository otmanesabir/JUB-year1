//
//  test_funcs.h
//  Quick_Sort
//
//  Created by Otmane Sabir on 3/12/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#ifndef test_funcs_h
#define test_funcs_h

// partitioning functions

int lomoto_part(int*, int, int); // Lomoto partition function
int hoare_part(int*, int, int); // hoare's partition function
int median_of_three(int*, int, int); // median of three function

// QuickSort Calls

void QuickSort(int*, int, int); // Quick sort w/ lomoto partition
void QuickSort_H(int*, int, int); // Quick sort w/ hoare's partition
void QuickSort_MOT(int*, int, int); // Quick sort w/ median of three

// Prints arrays
void array_printer(int *, int);

/* Tests a quickSort variant on a single array of size 20 and
 prints the array before sorting and after sorting */
void test_func(void (*f)(int *, int, int));

/* Gets runtime of quick sort on 100000 for all 3 variants
and outputs results to a file */

/* This function takes a string as a varibale in order to choose where to save
 the file that will contain the sum and average */

void average_test(std::string&);

// test function to plot the results
/* This function takes on the QuickSort variants as a parameter in order to pick
 which variant is going to be used for the test, it also takes a string which is
 the file directory we want to use. The path can be changed in the main function
 but for now I made it to suit my folders
 */

void plotting_test(void (*f)(int*, int, int), std::string&);


// Insertion sort used for median of three
void InsertionSort(int *arr, int size);


//public static int medianOf3(int[] intArray, int left, int right) {
//    int center = (left + right) / 2;
//
//    if (intArray[left] > intArray[center])
//        swap(intArray, left, center);
//
//    if (intArray[left] > intArray[right])
//        swap(intArray, left, right);
//
//    if (intArray[center] > intArray[right])
//        swap(intArray, center, right);
//
//    swap(intArray, center, right - 1);
//    return intArray[right - 1];
//}
//
//public static void swap(int[] intArray, int dex1, int dex2) {
//    int temp = intArray[dex1];
//    intArray[dex1] = intArray[dex2];
//    intArray[dex2] = temp;
//}
//
//public static int partitionIt(int[] intArray, int left, int right, double pivot) {
//    int leftPtr = left;
//    int rightPtr = right - 1;
//
//    while (true) {
//        while (intArray[++leftPtr] < pivot)
//            ;
//        while (intArray[--rightPtr] > pivot)
//            ;
//        if (leftPtr >= rightPtr)
//            break;
//        else
//            swap(intArray, leftPtr, rightPtr);
//    }
//    swap(intArray, leftPtr, right - 1);
//    return leftPtr;
//}


#endif /* test_funcs_h */
