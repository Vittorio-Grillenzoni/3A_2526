/*Contriene il main proggram dell'esercizio che voglio svolgere*/

/**
 * Check whether a number is prime or not.
 * @param int Number to test.
 * @return boolean true/false.
 */
bool isPrimo(int _n);
/**
 * Verifica se un numero è perfetto oppure no
 * @param int Numero da verificare
 * @return boolean true/false
 */
#include <stdio.h>
#include "mialib.c"

int main(){
    int valore;
    int junk;
    for(valore=1; valore <= 7; valore++){
        if(isPrimo(valore))
            printf("%d -> Primo\n", valore);
    }
    printf("\n\n");
    for(valore=7; valore <= 15; valore++){
        if(isPrimo(valore))
            printf("%d -> Primo\n", valore);
    }
    printf("\n\n");
    for(valore=15; valore <= 25; valore++){
        if(isPrimo(valore))
            printf("%d -> Primo\n", valore);
    }
    printf("\n\n");
    for(valore = 1; valore <= 100; valore++){
        
    }

    return(0);
}
