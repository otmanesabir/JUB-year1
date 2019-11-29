//
//  main.cpp
//  recursive_method
//
//  Created by Otmane Sabir on 2/27/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>

using namespace std;

int fibonacci_recursive(int n){
    if ( n < 2 ){
        return n;
    }
        return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
}


int main(int argc, const char * argv[]) {
    int n = 20;
    int result = fibonacci_recursive(n);
    cout << "Fibunacci sequence for " << n << " is " << result << endl;
    return 0;
}
