/*
    Realizzare un programma che richiede in input due valori interi nelle rispettive variabili Anno e Mese,
    comunicare quanti giorni ha il mese inserito. Attenzione: Se l'anno è bisestile febbraio ha 29 giorni,
    un anno è bisestile se è divisibile per 100 e per 400, altrimenti se non è secolare deve essere divisibile per 4.
*/
#include <stdio.h>

int main(void) {
    int Anno;
    int Mese;
    printf("Inserire un anno: ");
    scanf("%d", &Anno);
    printf("Inserire un mese: ");
    scanf("%d", &Mese);
    if (Anno % 100 == 0 || Anno % 400 == 0) {
        printf("L'anno è bisestile e Febbraio ha 29 giorni");
    }
    else{
        if (Anno % 4 == 0) {
            printf("L'anno non è bisestile");
        }
        else{
            printf("Impossibile constatare se l'Anno è bisestile o secolare");
        }
    }
    if (Mese % 2 == 1) {
        printf("Il mese inserito ha 31 giorni");
    }
    else{
        if (Mese % 2 == 0) {
            if(Mese == 2) {
                printf("Il mese ha 28 giorni");
            }
            else{
                printf("Il mese inserito ha 30 giorni");
            }
        }
        else{

        }
    }
    return (0);
}