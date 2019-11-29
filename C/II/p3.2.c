/*
 JTSK-320111
 p32.c
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>


// Linked list

struct list {
    int info;
    struct list *next; /* self reference */
};


// Inserts at front

struct list* push_front(struct list *my_list, int value) {
    struct list *newel;
    newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory\n");
        return my_list; }
    newel->info = value;
    newel ->next = my_list;
    return newel;
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
    printf("\n");
}

// Add to position

struct list* add_to_position(struct list* my_list, int position, int value){
    if (position < 0){
        printf("Invalid position!\n");
        return my_list;
    }
    if (position > 0 && my_list == NULL){
        printf("Invalid position!\n");
        return my_list;
    }
    if(position == 0){
            //insert at front
            return push_front(my_list, value);
    } else {
        my_list->next = add_to_position(my_list->next, position - 1, value);
        return my_list;
    }
}

struct list* reverse(struct list* my_list){
    if (my_list == NULL){
        return NULL;
    }
    if (my_list->next == NULL){
        return my_list;
    }
    int info = my_list->info;
    struct list* temp = my_list->next;
    free(my_list);
    return push_back(reverse(temp), info);
}

// Main function

int main(){
    int value;
    struct list* my_list = NULL;
    char decision;
    int idx;
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
            case 'i':
                scanf("%d", &idx);
                scanf("%d", &value);
                add_to_position(my_list, idx, value);
                break;
            case 'R':
                my_list = reverse(my_list);
                break;
            default:
                break;
        }
    }
    return 0;
}


