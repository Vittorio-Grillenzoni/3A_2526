/*
    Esercitazione 1 della pausa didattica.


    PER COMPILARE:
    gcc nomefile.c [invio] -> se tutto ok crea un file a.out
    PER ESEGUIRE
    ./a.out
*/
#include <stdio.h>
#include <stlib.h>
#include <time.h>

int main(){
    int a;      //variabile iniziale per fare alcune prove
    char junk;

    // assegnazione MANUALE di un valore iniziale ad una variabile 'a', relativa stampa printf
    a = 5;
    printf("%d\n", a);


    printf("Inserisci un valore per A: ");
    scanf("%d\n", a);
    junk = getchar();

    printf("%d\n", a);

    a = a * 2;
    a*= 2;

    a = a + 6;
    a+=6;

    a = a + 1;
    a+=1;
    a++;
    printf("%d\n", a);




    return 0;
}