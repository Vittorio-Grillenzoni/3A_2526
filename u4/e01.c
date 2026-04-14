#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 25
//const int DIM=10;

int main(){
    int vet[DIM];   //array di 10 elementi interi indicizzati da 0 a 9
    int i;          //variabile tipica per lo scorrimento di un vettore

    srand(time(NULL));
    //init di un vettore con valori casuali tra 1 e 10
    for(i=0; i<DIM; i++){
        if(i % 2 == 0){
            printf("indice i: %d\n", i);
            vet[i] = 1 + rand()%10;
        }
    }

    // stampo il vettore per vedere i valori assegnati
    for(i=0; i<DIM; i++){
        printf("%3d ", vet[i]);
    }
    printf("\n");
    // visualizza solamente i valori pari che compaiono nel vettore
    return(0);
}