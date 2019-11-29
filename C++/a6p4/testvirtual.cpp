#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
 
using namespace std;

int main() {
    const char* colors[] = {"RED", "GREEN", "YELLOW", "BLUE"};
    const int num_obj = 20;
    double sum_area = 0;
    double sum_perimeter = 0;
    srand(static_cast<unsigned int>(time(NULL)));
    Area *list[num_obj];
    for(int i = 0; i < num_obj; i++){
        
        int idx = rand()%4;
        int type = rand()%4;
        
        if(type == 0){
            // Creats a circle
            cout << "Creating a Circle" << endl;
            int radius = rand()%50 + 1;
            list[i] = new Circle(colors[idx], (double)radius);
        } else if(type == 1){
            // Creates a rectangle
            cout << "Creating a Rectangle" << endl;
            int length = rand()%50 + 1;
            int width = rand()%50 + 1;
            list[i] = new Rectangle(colors[idx], (double)length, (double)width);
        } else if(type == 2){
            // Creates a ring
            cout << "Creating a Ring" << endl;
            int outerRadius = rand()%50 + 1;
            int innerRadius = rand()%outerRadius + 1;
            list[i] = new Ring(colors[idx], (double)outerRadius, (double)innerRadius);
        } else {
            // Creates a square
            cout << "Creating a Square" << endl;
            int side = rand()%50 + 1;
            list[i] = new Square(colors[idx], side);
        }
    }
    
    for(int i = 0; i < num_obj; i++){
        sum_perimeter += list[i]->calcPerim();
        sum_area += list[i]->calcArea();
    }
    
    cout << "\nThe total area is " << sum_area << endl;
    cout << "The total perimeter is " << sum_perimeter << endl;
    return 0;
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
}
