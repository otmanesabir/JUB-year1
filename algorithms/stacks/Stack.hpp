//
//  Stack.hpp
//  Stack HW7
//
//  Created by Otmane Sabir on 5/21/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

template <class T>
class Stack{
private:
private:
    struct StackNode {              // linked list node
        T data;                     // data at this node
        StackNode *next;            // next node in list
    };
    StackNode *top;
    int size;
    int current_size;
public:
    Stack(){
        top = nullptr;
        cout << "Calling constructor" << endl;
        size = -1;
    }
    Stack(int new_size){
        top = nullptr;
        cout <<"Calling constructor" << endl;
        size = new_size;
        this->current_size = 0;
    };
    void push(T value){
        if (size == -1){
            StackNode* newnode = new StackNode;
            newnode->data = value;
            newnode->next = top;
            top = newnode;
        } else if (current_size < size){
            StackNode* newnode = new StackNode;
            newnode->data = value;
            newnode->next = top;
            top = newnode;
            current_size++;
        } else {
            cout << "Stack overflow" << endl;
        }
    };
    bool isEmpty(){
        if (top == nullptr){
            return true;
        } else {
            return false;
        }
    };
    T pop(){
        if (!isEmpty()){
            T value = top->data;
            top = top->next;
            return value;
        } else {
            cout << "Stack underflow\n";
            return false;
        }
    };
};

#endif /* Stack_hpp */
