/*
 JTSK-320111
 a6 p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */
#include<stdio.h>


// Recursive function that draws the shape
void printStars(int num, char ch)
{
    int e = num;
    if (num > 0) // this is the base case
    {
        
        while ( e > 0 )
        {
            printf("%c", ch); // prints the character
            e--;
        }
        printf("\n"); // prints the space
        printStars(num - 1, ch);
        
    }
}


int main () {
    int n;
    char ch;
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    printStars(n, ch);
    
}
