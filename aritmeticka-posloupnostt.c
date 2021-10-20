#include <stdio.h>
#include <stdlib.h>

void generuj (int a1, int d, int n) {
    for(int i = 0; i < n; i++) {
        a1 = a1 + d;
        printf ("%d\n", a1);
    }

}

int an (int a1, int d, int n) {
    n = a1 + (n - 1) * d;
    printf("N = %d\n", n);
    printf("A1 = %d\n", a1);
    printf("D = %d\n", d);
    
    return n;
}

int main () {
    int g;
    printf ("Vyber si funkci:\nGeneruj = 1\nAn = 2\n");
    printf("Zadej tvuj vyber:");
    scanf ("%d", &g);
    if (g == 1){
        int a1, d, n;
        printf("Zadej hodnotu a1:  \n");
        scanf ("%d", &a1);
        printf("Zadej hodnotu d:  \n");
        scanf ("%d", &d);
        printf("Zadej hodnotu n:  \n");
        scanf ("%d", &n);

        generuj(a1, d, n);
    }
    if (g == 2 ){
        int a1, d, n, ann;
        printf("Zadej hodnotu a1:  \n");
        scanf ("%d", &a1);
        printf("Zadej hodnotu d:  \n");
        scanf ("%d", &d);
        printf("Zadej hodnotu n:  \n");
        scanf ("%d", &n);
        an (a1, d, n);


    }
    else {
        printf ("Prosim nebud slabko.\n");
    }
    

    return 0;
}