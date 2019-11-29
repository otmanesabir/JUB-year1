//
//  main.cpp
//  bottom_up
//
//  Created by Otmane Sabir on 2/27/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>

using namespace std;

int bottomUpFib(int n){
    if (n < 2) {
        return n;
    }
    int oneBehind = 1;
    int twobehind = 0;
    int result = 0;
    for (int i = 1; i < n; i++){
        result = oneBehind + twobehind;
        twobehind = oneBehind;
        oneBehind = result;
        cout << result << endl;
    }
    return result;
}

int recursive(int n){
    if (n < 2) return n;
    return recursive(n-1)+recursive(n-2);
}

int main(int argc, const char * argv[]) {
    int n = 10;
    int result = bottomUpFib(n);
    int result2 = recursive(n);
    cout << "result is " << result << endl;
    cout << result2 << endl;
    return 0;
}
