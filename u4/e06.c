#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int f1;
    int f2;
    int f3;
    int f4;
    int a;
    int b;
    int c;
    int scelta;
    int cnt = 0;
    do{
        printf("-- MENU --\n");
        printf("1 -> Funzione che stampa il prodotto calcolato per somme successive.\n");
        printf("2 -> Richiede nel case un valore decimale che viene passato alla funzione per convertirlo e stamparlo in base 16 utilizzando 3 cifre esadecimali.\n");
        printf("3 -> La funzione riceve i due valori e calcola l’area della figura   scelta utilizzando la lunghezza inserita.\n");
        printf("4 -> Richiesto un valore compreso tra 1 e 9999, la funzione riceve tale valore quindi calcola e stampa la somma delle   singole cifre che lo  compongono.\n");
        printf("0 -> Termina Programma!\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch(scelta){
            case 1:{
                printf("Inserire i valori a e b");
                scanf("%d ", &a);
                scanf("%d", &b);
                
                break;
            }
            case 2:{
                printf("Inserire 3 valori: \n");
                scanf("%d, ", &a);
                scanf("%d, ", &b);
                scanf("%d\n", &c);
                int f2 = ordinaTreValori(a, b, c);
                break;
            }
            case 3:{
                printf("Inserire i due valori: ");
                scanf("%d ", &a);
                scanf("%d ", &a);
                f3 = determinaFigura(a, b);
                cnt++;
                break;
            }
            case 4:{
                
                cnt++;
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