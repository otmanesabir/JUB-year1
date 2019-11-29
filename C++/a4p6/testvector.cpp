/*
 CH08-320142
 a4 p6.cpp
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <iostream>
#include <ctime>
#include "Vector.h"

int main(void) {
    double *ptr = nullptr;
    double *ptr_2 = nullptr;
    int num = 5;
    double randNum;
    // allocates memory for both pointers
    ptr = new double[num];
    ptr_2 = new double[num];
    for (int i =  0; i < num; i++){
        // this generates a random number
        randNum = (double) (rand()%100);
        ptr[i] = 3.4 + randNum;
    }
    for (int i =  0; i < num; i++){
        // this generates a random number
        randNum = (double) (rand()%100);
        ptr_2[i] = 5.63 + randNum;
    }
    // first instance
    Vector v1(num, ptr);
    // second instance : cpy of first
    Vector v2(v1);
    // third instance
    Vector v3(num, ptr_2);
    cout << "Norm of first vector : " << v1.norm() << endl;
    cout << "Printing scalar of vectors : " << endl;
    (v1.scalar_prd(v3)).print();
    cout << "Printing difference of vectors : " << endl;
    (v1.difference(v3)).print();
    cout << "Printing addition of vectors : " << endl;
    (v1.sum(v3)).print();
    // deallocates memory for both pointers
    delete [] ptr;
    delete [] ptr_2;
    ptr = nullptr;
    ptr_2 = nullptr;
    return 0;
}
