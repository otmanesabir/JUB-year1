/*
 CH08-320142
 a1 p3.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;
// first definition of mycount function
int mycount(int x, int y) {
    int dif;
    // dif variable stores the value of the difference
    dif = y - x;
    // returns the difference
    return dif;
}
// second definition of mycount function
int mycount(char c, string str) {
    // initializing count variable
    int count = 0;
    // getting the string length
    int i = (int) str.length();
    /* condition to check to read the
     string character by character */
    while ( i - 1 >= 0 ) {
        if ( c == str[i] ) {
            // increments by one everytime the character is found
            count++;
        }
        i--;
    }
    // returns the count
    return count;
}
int main(void) {
    char c;
    // reads the character
    cin >> c;
    string str;
    // reads the string
    cin >> str;
    /* prints the number of occurences of
     the character in the string */
    cout << mycount(c, str) << endl;
    int x;
    int y;
    // reads the first and second value
    cin >> x;
    cin >> y;
    // prints the difference
    cout << mycount(x, y) << endl;
    return 0;
}
