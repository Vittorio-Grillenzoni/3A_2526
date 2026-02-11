/* Programma che richiede un numero da tastiera intero positivo,
se il numero è inferiore a 25 allora mostra tutti i valori dal valore
inserito a 50; altrimenti visualizza un messaggio generico
"Serie non realizzabile"
*/
#include <stdio.h>

int main(void) {
    int val; //variabile per valore inserito dall'utente
    int tmp; //variabile per l'iterativa
    char junk; //variabile di comodo per pulire il buffer di tastiera

    //1. richiesta del valore all'utente
    printf("Inserisci un valore: ");
    scanf("%d", &val);
    junk = getchar();

    // test sul valore inserito
    if(val < 25){
        //costruiamo l'iterativa per visualizzare tutti i valori da val fino a 50
        tmp = val;
        while(tmp <= 50){
            printf("%d", tmp);
            tmp = tmp + 1; //tmp++;
        }

        //costruiamo l'iterativa per visualizzare SOLO i valori pariù
        printf("\n");
        tmp = val;
        while(tmp <= 50){
            if(tmp%2 == 0){
                printf("%d", tmp);
            }
            tmp = tmp + 1;
        }
    }
    else{
        printf("Serie non realizzabile...\n");
    }
    return(0);
}