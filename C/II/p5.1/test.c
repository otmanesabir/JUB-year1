#include "stack.h"

int main(int argc, char** argv){
    int data;
    char cmd; //command
    struct stack* s = createStack();
    while(1){
        scanf("%c", &cmd);
        switch(cmd){
            case 's':
                scanf("%d", &data);
                push(data, s);
                break;
            case 'p':
                pop(s);
                break;
            case 'e':
                empty(s);
                break;
            case 'q':
                freeStack(s);
                printf("Quit\n");
                return 0;
        }
    }
    return 0;
}
