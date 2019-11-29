/*
 JTSK-320111
 a4 p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include "Box.h"
#include <iostream>

using namespace std;

int main(void) {
    int n, h, w, d;
    // takes number of elements
    cout << "Enter number of elements : " << endl;
    // takes number of elements
    cin >> n;
    Box *boxes;
    // allocates memory
    boxes = new Box[2*n];
    for ( int i = 0; i < n; i++){
        cin >> h;
        cin >> w;
        cin >> d;
        // sets height, width and depth for each box
        boxes[i].setHeight(h);
        boxes[i].setWidth(w);
        boxes[i].setDepth(d);
        // copies the box  value
        boxes[i+n] = boxes[i];
    }
    // prints the value of the volume
    for ( int i = 0; i < 2*n; i++) {
        cout << "Box " << i + 1 << " area : " <<
            boxes[i].calc(boxes[i]) << endl;
        }
    // deallocates memory
    delete [] boxes;
    return 0;
}
