#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 5

// fai una funzione che carica da tastiera un vettore di dimensione DIM
void carica(int v[], int dim){
    for(int i=0; i<dim; i++){
        printf("Inserire un numero: ");
        scanf("%d", &v[i]);
    }
}

void stampa(int v[], int dim){
    for(int i=0; i<dim; i++){
        printf("%d ", v[i]);
        
    }
}

void casuale(int v[], int dim){
    for(int i=0; i<dim; i++){
        v[i]=rand()%50+1;
    }
}

int main(){
    int dim=DIM;
    int v[DIM];
    srand(time(NULL));
    casuale(v,dim);
    //carica(v, dim);
    stampa(v, dim);
    printf("\n");
    return 0;
}