#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// Creating a an array of area instances, the number of instances that's created is num_obj (1)
                                                // which was initialized and set to 6 in the beginning of the program
	int index = 0;								// declares and initializes index to 0 (2)
	double sum_area = 0.0;                      // declares and initializes area to 0 (3)
    //double sum_perim = 0.0;
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// Creating an instance called blue_ring and
                                                // initializing it with paramteres using parametric contstructor (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
    cout << "Creating a Square: ";
    Square blue_square("BLUE", 50);
	list[0] = &blue_ring;						// Feeding blue_ring instance we created to the first element of the area array by reference
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
    list[6] = &blue_square;
	while (index < num_obj) {					// Checks if the index is smaller than the number of objects to itterate thru the entire array
		(list[index])->getColor();				
		double area = list[index++]->calcArea();// feeds the area of the element of the array to the area variable
		sum_area += area;
	}
	cout << "\nThe total area is " << sum_area << " units " << endl;
    index = 0;
    double sum_perimeter = 0;
    while(index < num_obj){
        (list[index])->getColor();    
        sum_perimeter += (list[index++])->calcPerim();
    }
    
    cout << "\nThe total perimeter is " << sum_perimeter << " units " << endl;
    //cout << "The total perimeter is " << sum_perim << " units " << endl;
    //
    /*
                                                                      ------
                                                                     | AREA |
                                                                      ------
                                                                        ^
                                                                        |
                                                                 -----------------
                                                                |                 |
                                                                |                 |
                                                                |                 |
                                                            --------         -----------
                                                           | Circle |       | Rectangle |
                                                            --------         -----------
                                                                ^
                                                                |
                                                                |
                                                            --------
                                                           |  Ring  |
                                                            --------
     
     
     */
	return 0;
}
