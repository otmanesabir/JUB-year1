/*
 CH08-320142
 a2 p1.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// myfirst for integers

int myfirst(int arr[], int num) {
    int i = 0;
    int j = -1;
    // checks
    while ( i < num ) {
        if ( arr[i] >= 0 && arr[i]%2 == 0 ) {
            j = arr[i];
            break;
        }
        i++;
    }
    // checks if value was found
    if ( j == -1 ) {
        return j;
    } else {
        return j;
    }
}

// myfirst for doubles

double myfirst(double arr[], int num){
    int i = 0;
    double j = 0;
    while ( i < num ){
        int cnvrt = (int) arr[i];
        if ( arr[i] < 0 && arr[i] == cnvrt ) {
            j = arr[i];
            break;
        }
        i++;
    }
    // checks if value was found
    if ( j == 0 ) {
        return -1.1;
    } else {
        return j;
    }
}

// myfirst for characters

char myfirst(char c[], int num) {
    int i = 0;
    char ch = '(';
    while ( i < num ){
        c[i] = tolower(c[i]);
        // checks if its not a vowel
        if ( c[i] != 'a' && c[i] != 'e' && c[i] != 'i' && c[i] != 'o' ){
            ch = c[i];
            // breaks after the condition is satisfied for the first time
            break;
        }
        i++;
    }
    // checks if value was found
    if ( ch == '(' ) {
        return '0';
    } else {
        return ch;
    }
}
int main(void) {
    int arr[] ={1, 3, 0, 5, 7};
    // gets number of elements in integer array
    int num = sizeof(arr)/sizeof(int);
    cout << myfirst(arr, num) << endl;
    double arr2[] = {1.4, -1.45, 1.2, -3};
    // gets number of elements in double array
    int num2 = sizeof(arr2)/sizeof(double);
    cout << myfirst(arr2, num2) << endl;
    char arr3[] = {'i', 'k', 'p', 'l', 'o'};
    // gets number of elements in characters array
    int num3 = sizeof(arr3)/sizeof(char);
    cout << myfirst(arr3, num3) << endl;
}
