//
//  main.cpp
//  Text Sort
//
//  Created by Otmane Sabir on 3/26/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Node{
public:
    Node *next;
    std::string word;
};

class LinkedList{
    void insert(Node *current, string &newword){
        if (current->word > newword){
            Node *newnode = new Node();
            newnode->word = current->word;
            newnode->next = current->next;
            current->word = newword;
            current->next = newnode;
            free(newnode);
            return;
        }
        Node *start_ref = new Node();
        while (current != NULL && current->word < newword){
            start_ref = current;
            current = current->next;
        }
        Node *newnode = new Node();
        newnode->word = newword;
        newnode->next = current;
        start_ref->next = newnode;
    }
    Node *start;
public:
    LinkedList(){
        start = NULL;
    }
    ~LinkedList(){
        if (start != NULL){
            delete start;
        }
    }
    void insert(string &newword){
        if (start == NULL){
            start = new Node();
            start->word = newword;
            start->next = NULL;
        } else {
            insert(start, newword);
        }
    }
    
    void export_lst(vector<string> &out){
        while(start != NULL){
            out.push_back(start->word);
            start = start->next;
        }
    }
};

void sort_words(vector<string> &words){
    LinkedList lst[26];
    for (int i = 0; i < words.size(); i++){
        int idx = (int) words[i][0]-'a';
        lst[idx].insert(words[i]);
    }
    vector<string> output;
    for (int i = 0; i < 26; i++){
        lst[i].export_lst(output);
    }
    words = output;
}


int main(int argc, const char * argv[]) {
    int k, n;
    cin >> n >> k;
    vector<string> lst;
    for (int i = 0; i < n; i++){
        string tmp = "";
        for(int j = 0; j < k; j++){
            char ch;
            cin >> ch;
            tmp += ch;
        }
        lst.push_back(tmp);
    }
    sort_words(lst);
    for (int i = 0; i < n; i++){
        cout << lst[i] << " ";
    }
    cout << "\n";
    return 0;
}
