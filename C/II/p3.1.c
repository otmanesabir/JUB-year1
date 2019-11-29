//
//  main.c
//  p3.1
//
//  Created by Otmane Sabir on 2/25/19.
//  Copyright © 2019 Otmane Sabir. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


// Linked list

struct list {
    int info;
    struct list *next; /* self reference */
};


// Inserts at front

struct list* push_front(struct list *my_list, int value) { struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list; }
    newel ->info = value; newel ->next = my_list; return newel;
}


// Inserts at end

struct list* push_back(struct list* my_list, int value) {
    struct list *cursor , *newel;
    cursor = my_list;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list;
    }
    newel ->info = value;
    newel ->next = NULL;
    if (my_list == NULL)
        return newel;
    while (cursor ->next != NULL)
        cursor = cursor ->next;
    cursor ->next = newel;
    return my_list;
}

// Memory deallocation

void dispose_list(struct list* my_list) {
    struct list *nextelem;
    while (my_list != NULL) {
        nextelem = my_list ->next;
        free(my_list);
        my_list = nextelem;
    }
}


// Print function

void print_list(struct list* my_list) {
    struct list *p;
    for(p = my_list; p; p = p->next) {
        printf("%d ", p->info);
    }
}

// Main function

int main(){
    int value;
    struct list* my_list = NULL;
    char decision;
    struct list* tmp;
while (1) {
    scanf("%c", &decision);
    switch (decision) {
        case 'a':
            scanf("%d", &value);
            my_list = push_back(my_list, value);
            break;
        case 'b':
            scanf("%d", &value);
            my_list = push_front(my_list, value);
            break;
        case 'p':
            printf("\n");
            print_list(my_list);
            break;
        case 'r':
            tmp = my_list;
            my_list = my_list->next;
            free(tmp);
            break;
        case 'q':
            dispose_list(my_list);
            exit(0);
        default:
            break;
    }
  }
}

