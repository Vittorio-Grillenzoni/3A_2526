/*
    Utilizzando le iterative innestate realizza i seguenti schemi grafici:
    1:
    +
    + +
    + + +
    + + + +
    + + + + +

    2:
    + + + + +
      + + + + 
        + + + 
          + + 
            +

    Realizzarli prima come 5x5 e poi con valori righe e colonne richiesti all'utente.
     
*/
#include <stdio.h>

int main(){
    int r; // variabile per le righe (ciclo)
    int c; // variabile per le colonne (ciclo)
    int nRows;
    int nCols;
    char junk;

    r = 1;
    while(r <= 1){  // iterativa per le righe
        c = 1;
        while(c <= 1){  // iterativa per le colonne
            printf(" +");
            c = c + 1;
        }
    printf("\n");
    r = r + 1;
    }
    r = 1;
    while(r <= 2){  // iterativa per le righe
        c = 1;
        while(c <= 2){  // iterativa per le colonne
            printf(" +");
            c = c + 1;
        }
    printf("\n");
    r = r + 1;
    }
    r = 1;
    while(r <= 3){  // iterativa per le righe
        c = 1;
        while(c <= 3){  // iterativa per le colonne
            printf(" +");
            c = c + 1;
        }
    printf("\n");
    r = r + 1;
    }
    r = 1;
    while(r <= 4){  // iterativa per le righe
        c = 1;
        while(c <= 4){  // iterativa per le colonne
            printf(" +");
            c = c + 1;
        }
    printf("\n");
    r = r + 1;
    }
    r = 1;
    while(r <= 5){  // iterativa per le righe
        c = 1;
        while(c <= 5){  // iterativa per le colonne
            printf(" +");
            c = c + 1;
        }
    printf("\n");
    r = r + 1;
    }
return 0;
}