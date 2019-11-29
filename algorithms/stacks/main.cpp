//
//  main.cpp
//  HW7
//
//  Created by Otmane Sabir on 5/21/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <queue>
#include "Stack.hpp"

using namespace std;

template <class T>
void queue_check(queue<T> myQ) {
    if (myQ.empty())
        cout << "The queue is still empty\n";
    else
        cout << "The queue is not empty\n";
}

int main(int argc, const char * argv[]) {
    queue<Stack<int>> queue;
    Stack<int> stck1;
    Stack<int> stck2;
    queue_check(queue);
    for (int i = 0; i < 10; i++)
        stck1.push(i);
    for (int i = 10; i < 20; i++)
        stck2.push(i);
    queue.push(stck1);
    queue.push(stck2);
    queue_check(queue);
    while (!queue.empty()) {
        while (!(queue.front()).isEmpty()){
            cout << (queue.front()).pop() << endl;;
        }
        queue.pop();
    }
    return 0;
}
