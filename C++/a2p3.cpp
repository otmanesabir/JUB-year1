/*
 CH08-320142
 a2 p3.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>

using namespace std;

// this function reads all elements of the array
int* read_int(int *a, int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    return a;
}
/* this function subtracts the maximum
from all elements of the array */
void subtract_max(int *a, int n){
    int max = a[0];
    for ( int i = 0; i < n; i++) {
        if ( a[i] > max ) {
            max = a[i];
        }
    }
    for ( int i = 0; i < n; i++) {
        a[i] -= max;
    }
}
// this function deallocates the memory
void deallocate(int *a) {
    delete a;
}
// this function prints all the elements after the subtraction
void print_int(int *a, int n) {
    cout << "Values after substraction : " << endl;
    for ( int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}
int main(void) {
    int n;
    // reads number of elements that will be entered
    cin >> n;
    // allocates memory to the array
    int *a = new int(n);
    // checks if allocation didn't fail
    if (a == NULL) {
        cout << "Memory allocation failed" << endl;
    }
    // reads values from user
    read_int(a, n);
    // substracts the max of all elements
    subtract_max(a, n);
    // prints the neww values after substraction
    print_int(a, n);
    // deallocates memory from function
    deallocate(a);
    return 0;
}
