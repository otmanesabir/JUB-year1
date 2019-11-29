//
//  main.cpp
//  Matrix_representation
//
//  Created by Otmane Sabir on 3/1/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>

using namespace std;

const int MAX = 1000;
int f[MAX] = {0};

// Returns n'th fuibonacci number using table f[]
int fib(int n)
{
    // Base cases
    if (n == 0) return 0;
    if (n <= 2 && n != 0) return (f[n] = 1);
    // other case
    if (f[n]) return f[n];
    int k = (n & 1)? (n+1)/2 : n/2;
    
    // Applyting above formula [Note value n&1 is 1
    // if n is odd, else 0.
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
    : (2*fib(k-1) + fib(k))*fib(k);
    
    return f[n];
}

int main(int argc, const char * argv[]) {
    int n = 15;
    int result = fib(n);
    int result2 = recursive_fib(n);
    cout << "Result is " << result << endl << result2 << endl;
    return 0;
}
