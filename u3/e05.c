/*
Realizzare un programma C che grazie ad un menu e ad uno switch-case soddisfi le seguenti richieste:
   1 Inserito un numero da tastiera comunicare quanti divisori ha.
   2 Inserito un numero da tastiera determinare e comunicare qual è la cifra maggiore o minore a scelta dell'utente.
   3 Inserito un numero da tastiera determinare e comunicare la somma delle cifre.
   4 Inserito un numero da tastiera determinare e calcolare il valor medio tra le cifre.
   5 Inserito un numero da tastiera determinare e comunicare il numero composto dalle cifre al contrario (es. 145 -> numero al contrario 541)
   6 Inseriti due numeri da tastiera determinare e comunicare MCD o mcm a scelta dell'utente.
   0 USCITA dal programma.
Ogni punto deve prevedere una specifica funzione, le funzioni ricevono i valori di cui necessitano come parametri, non eseguono alcuna stampa al loro interno ma restituiscono il risultato al main.
Creare il prototipo con relativo commento nella mialib.h, definire la funzione nel mialib.c, eseguire un test del programma come e06.c (o file analogo secondo la tua numerazione)
*/
#include <stdio.h>
#include "mialib.c"
int main(){
    int scelta;
    int n;
    int sum;
    int m;
    int MCD;
    int mcm;
    do{
        printf("-- MENU --\n");
        printf("1 -> Visualizza divisori\n");
        printf("2 -> Visualizza il numero maggiore o minore\n");
        printf("3 -> Visualizza la somma delle cifre\n");
        printf("4 -> Visualizza la media\n");
        printf("5 -> Numero al contrario inserito da tastiera\n");
        printf("6 -> Inserire due numeri e scegliere se visualizzare il divisore massimoo il multiplo minimo\n");

        printf("0 -> Termina Programma!\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch(scelta){
            case 1:{
                printf("Inserisci n: ");
                scanf("%d", &n);
                int cnt = divNumber(n);
                printf("%d", cnt);
                break;
            }
            case 2:{
                printf("Inserisci n: ");
                scanf("%d", &n);
                int minMax = minorMax(n);
                break;
            }
            case 3:{
                
                break;
            }
            case 4:{
                
                break;
            }
            case 5:{
                
                break;
            }
            case 6:{
                
                break;
            }
            default:{
                if(scelta != 0){
                    printf("Scelta non valida!\n");
                    printf("\n\n");
                }
                break;
            }
        }
    }while(scelta != 0);
    return(0);
}