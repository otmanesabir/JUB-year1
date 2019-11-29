/*
 CH08-320142
 a1 p2.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    double x;
    cin >> x;
    string s;
    cin >> s;
    while (n > 0) {
        cout << s << ":" << x << endl;
        n--;
    }
}
