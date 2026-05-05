#include <stdio.h>
#include "lib.c"

#define DIM 8

int main(){
    int numero;
    int bin[DIM];
    char junk;

    // step 1: acquisisco il valore intero da tastiera
    printf("Inserisci un valore intero: ");
    snaf("%d", &numero);
    junk = getchar();
    
    convertiBinario(numero, bin, DIM);
    stampaBinario(bin, DIM);
    printf("\n\n");
    return(0);
}