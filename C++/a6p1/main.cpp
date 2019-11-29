/*
 CH08-320142
 a6 p1.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int rndNum; // stores the random number
    // array of 4 strings
    string colors[4] = {"RED", "BLACK", "VIOLET", "BLUE"};
    // init random number generator
    srand(static_cast<unsigned int>(time(0)));
    // prints a random color 15 times
    for (int i = 0; i < 15; i++){
        // generates the random number
        rndNum = rand()%4;
        cout << i + 1 << ": " << colors[rndNum] << endl;
    }
    return 0;
}
