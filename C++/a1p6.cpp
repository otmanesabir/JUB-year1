/*
 CH08-320142
 a1 p6.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(void) {
    string str;
    // asks for players name
    cout << "Please enter your name" << endl;
    // scans the name
    getline(cin, str);
    int rndNum;
    // gets random number from 1 to 1000
    srand(static_cast<unsigned int>(time(0)));
    rndNum = ((rand()%1000 + 1));
    int x;
    cout << "Start guessing :" << endl;
    // reads value from user
    cin >> x;
    // this variable stores the number of guesses
    int count = 0;
    /* condition that checks if the entered value
     is different than the generated number */
    while (x != rndNum) {
        // checks if x is too low
        if ( x < rndNum ){
            cout << "Too low" << endl;
        // checks if x is too high
        } else if ( x > rndNum ){
            cout << "Too high" << endl;
        }
        // reads the user's guess again and increments the count by 1
        cin >> x;
        count++;
    }
        // prints the number of guesses once the player finds the number
    cout << "Congratulations you have found the number after ";
    cout << count << " guesses." << endl;
    
    return 0;
}

