/*
 JTSK-320111
 a3 p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>

int main() {
    int i = 8;
    // the program didn't work because their were no curly braces so the loop wasn't identified
    while (i >= 4) {
      printf("i is %d\n", i);
      i--;
    }
    printf("That’s it.\n");
    return 0;

}
