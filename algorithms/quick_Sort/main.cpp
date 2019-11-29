//
//  main.cpp
//  Quick_Sort
//
//  Created by Otmane Sabir on 3/12/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include "test_funcs.hpp"


int main(){
//    std::string file1 = "/Users/otmanesabir/Desktop/lomoto_plot.txt";
//    std::string file2 = "/Users/otmanesabir/Desktop/hoares_plot.txt";
//    std::string file3 = "/Users/otmanesabir/Desktop/mo3_plot.txt";
    std::string file4 = "/Users/otmanesabir/Desktop/(d).txt";
    /* Outputs running time for arrays of different sizes (from 0 to 9999)
     which I used to plot the different partitioning functions */
//    plotting_test(QuickSort, file1);
//    plotting_test(QuickSort_H, file2);
//    plotting_test(QuickSort_MOT, file3);
    // Outputs total & average running time for 100000 arrays of fixed size 1000
    test_func(QuickSort_MOT);

}

