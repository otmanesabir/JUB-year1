
//
//  lab.c
//  a4 p4.c
//  Otmane Sabir
//  o.sabir@jacobs-university.de
//
#include <stdio.h>

void printform(int n, int m, char c) {
    int i=1;
    int j=m;
    while ( j <= m+n-1 ){
        while(i <= j ) {
            printf("%c", c);
            i++;
        }
        printf ("\n");
        j++;
        i = 1;
    }
}
int main() {
    int n,m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);
    printform(n, m, c);
}
