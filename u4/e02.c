#include <stdio.h>
#include "lib.c"

#define DIM 10

int main(){
    int vettore[DIM];   // vettore di DIM
    int i;

    srand(time(NULL));

    initVettore(vettore, DIM);
    stampaVettore(vettore, DIM);
    

    return(0);
}