/*
 CH08-320142
 a2 p5.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>

using namespace std;

bool isPalindrome(string s) {
    // finds length of entered string
    int len = (int) s.length();
    // find the mid value of the length
    int mid = (len/2);
    int i = 0;
    int j = len - 1;
    int count = 0;
    // checks if the length is odd
    if ( len%2 != 0 ){
    /* condition to itterate through
    all characters except the middle one */
        while ( i < mid && j > mid ) {
            if ( s[i] == s[j] ) {
                // increments by one once match is found
                count++;
            } else if ( s[i] != s[j] ) {
                // breaks from the loop once it finds a mismatch
                break;
            }
            i++;
            j--;
        }
        // checks if the loop itterated through the entire string
        if ( count == mid ) {
            // if yes word is palindrome
            cout << "word is palindrome" << endl;
            return true;
        } else {
            // if not word is not palindrome
            cout << "word is not palindrome" << endl;
            return false;
        }
        // checks if number of characteris even
    } else if ( len%2 == 0 ) {
        /* condition to iterate through
         all characters of the string */
        while ( i < mid && j >= mid ) {
            if ( s[i] == s[j] ) {
                // increments the matches count
                count++;
            } else if ( s[i] != s[j] ) {
                // breaks once mismatch if found
                break;
            }
            i++;
            j--;
        } if ( count == mid ){
            // if count is equal to mid value
            cout << "word is palindrome" << endl;
            return true;
        } else {
            // else its not a palyindrome
            cout << "word is not palindrome" << endl;
            return false;
        }
    }
    return 0;
}


int main(void) {
    string s;
    // reads string
    cin >> s;
    // repeadtly reads string unless "exit" is entered
    while ( s != "exit" ){
    // function call
        cout << isPalindrome(s) << endl;
        cin >> s;
    }
    return 0;
}
