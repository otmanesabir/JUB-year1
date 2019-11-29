//
//  main.cpp
//  Linked List (HW7)
//
//  Created by Otmane Sabir on 5/22/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <list>

using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node (int data){
        this->data = data;
        next = NULL;
    }
};

struct LinkedList {
    Node *head;
    LinkedList(){
        head = NULL;
    }
    void push(int data){
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
    void reverse(){
        Node *prev, *curr, *next, *ref;
        prev = NULL;
        curr = head;
        next = head->next;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ref = prev;
    }
    void print_lst(){
        Node *temp;
        temp = head;
        while (head != NULL){
            cout << head->data << endl;
            head = head->next;
        }
        head = temp;
        delete temp;
    }
    void reverse_lst(){
        Node *prev, *curr, *next;
        curr = head;
        prev = NULL;
        next = NULL;
        while (curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main(int argc, const char * argv[]) {
    LinkedList lst;
    for (int i = 0; i < 10; i++){
        lst.push(i);
    }
    lst.print_lst();
    lst.reverse_lst();
    lst.print_lst();
    return 0;
}
