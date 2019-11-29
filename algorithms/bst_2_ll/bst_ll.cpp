//
//  main.cpp
//  BST to LL
//
//  Created by Otmane Sabir on 5/22/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <list>


using namespace std;


// If BST doesn't exist
// create a new node as root
// or it's reached when
// there's no any child node
// so we can insert a new node here

// If the given key is greater than
// node's key then go to right subtree

// If the given key is smaller than
// node's key then go to left subtree

struct BST {
public:
    int key;
    BST *left;
    BST *right;
    BST *parent;
    BST(){
        parent = nullptr;
        right = nullptr;
        left = nullptr;
    }
};

BST* insert(BST *node, int value){
    if (node == nullptr){
        node = new BST;
        node->left = nullptr;
        node->right = nullptr;
        node->parent = nullptr;
        node->key = value;
    } else if (value > node->key){
        node->right = insert(node->right, value);
        node->right->parent = node;
    } else {
        node->left = insert(node->left, value);
        node->left->parent = node;
    }
    return node;
}

void print_BST(BST *node){
    if (node != nullptr){
        print_BST(node->left);
        cout << node->key << endl;
        print_BST(node->right);
    }
}

BST* tree_search(BST *node, int idx){
    if (node == nullptr || node->key == idx){
        return node;
    } else if ( idx < node->key){
        return tree_search(node->left, idx);
    } else {
        return tree_search(node->right, idx);
    }
}

BST* newNode(int data)
{
    BST* node = new BST();
    node->key = data;
    node->left = NULL;
    node->right = NULL;
    
    return node;
}

BST* lst_to_bst(list<int> &lst, list<int>::iterator start, list<int>::iterator end){
    if (*start > *end)
        return NULL;
    /* get the middle */
    int mid = (int) (distance(start, end))/2;
    list<int>::iterator mid_it = start;
    advance(mid_it, mid-1);
    BST *root = newNode(*mid_it);
    
    // Construct left subtree
    root->left = lst_to_bst(lst, lst.begin(), mid_it);

    advance(mid_it, 2);
   // Contruct right subtree
    root->right = lst_to_bst(lst, mid_it, lst.end());
    return root;
}

int main(int argc, const char * argv[]) {
    list<int> lst;
    for (int i = 0; i < 10; i++){
        lst.push_back(i);
    }
    lst.sort();
    for (auto v : lst){
        cout << v << endl;
    }
    BST *tree = lst_to_bst(lst, lst.begin(), lst.end());
    print_BST(tree);
    list<int>::iterator mid_it;
    mid_it = lst.begin();
    return 0;
}

//
//1) Get the Middle of the linked list and make it root.
//2) Recursively do same for the left half and right half.
//a) Get the middle of the left half and make it left child of the root
//created in step 1.
//b) Get the middle of right half and make it the right child of the
//root created in step 1.
