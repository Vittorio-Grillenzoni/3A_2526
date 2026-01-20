/*
Realizzare un programma C che permetta di inserire 4 valori interi, al termine dell’inserimento comunica il
valore minore inserito, se i valori sono in ordine decrescente, le medie tra primo e secondo e tra terzo e quarto.
*/
#include <stdio.h>

int main(){
    int n;
    int n1;
    int n2;
    int n3;
    int m;
    int m1;
    printf("Inserisci il primo valore: ");
    scanf("%d", &n);
    printf("Inserisci il secondo valore: ");
    scanf("%d", &n1);
    printf("Inserisci il terzo valore: ");
    scanf("%d", &n2);
    printf("Inserisci il quarto valore: ");
    scanf("%d", &n3);
    if(n < n1 && n < n2 && n < n3){
        printf("Il primo valore e' quello più basso\n");
    }
    else if(n1 < n && n1 < n2 && n1 < n3){
        printf("Il secondo valore e' quello più basso\n");
    }
    else if(n2 < n && n2 < n1 && n2 < n3){
        printf("Il terzo valore è quello più basso\n");
    }
    if(n3 < n && n3 < n1 && n3 < n2){
        printf("Il quarto valore è quello più basso\n");
    }
    if(n > n1 && n > n2 && n > n3){
        if(n1 > n2 && n1 > n3){
            if(n2 > n3){
                printf("I numeri sono inseriti in ordine decrescente\n");
            }
            else{}
        }
        else{}
    }
    else{}
    m = (n + n1)/2;
    printf("La media tra il primo ed il secondo numero è: %d\n", m);
    m1 = (n2 + n3)/2;
    printf("La media tra il terzo ed il quarto numero è: %d\n", m1);
}