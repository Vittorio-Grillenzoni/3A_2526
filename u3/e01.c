// sezione delle INCLUDE -> librerie
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
// sezione PROTOTIPI -> DICHIARAZIONE DELLE FUNZIONI.

/**
 * Check whether a number is prime or not.
 * @param int Number to test.
 * @return boolean true/false.
 */
bool isPrimo(int _n);
/**
 * Check if the number is perfect or not
 * @param int Numero da verificare
 * @return boolean true/false
 */
bool isPerfect(int _pe);
//scrivi il prototipo
/**
 * Verifica terna pitagorica, se n1^2+n2^2 = n3^2
 * @param int _n1 Primo valore
 * @param int _n2 Secondo valore
 * @param int _n3 Terzo valore
 * @return boolean true/false
 */
bool isPitagora(int _pi);
//scrivi il prototipo

// sezione MAIN PROGRAM
int main(){
    int valore;
    int junk;
    int n1, n2, n3;
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
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    if(isPitagora(n1, n2, n3))
    return(0);
}

// SEZIONE DELLE FUNZIONI -> DEFINIZIONE DELLE FUNZIONI
bool isPrimo(int _n){
    int div;    // variabile per i divisori del numero passato come parametro.
    int cnt;    // contatore per i divisori trovati del numero passato come parametro.

    cnt = 0;
    for(div=1; div<=_n; div++){
        if(_n%div == 0) // ho trovato un divisore! -> incremento il contatore
            cnt++;
    }

    if(cnt<=2)
        return(true);
    else
        return(false);
}

bool isPerfect(int _pe, int div, int somma){
    
    printf("Inserire un valore: ");
    scanf("%d", &pe);
    for(div = 1; div <= pe; div++){
        if (pe%div != 0){
            
        }

    }
        
}

bool isPitagora(int n, int v, int v1){
    int sum = 0;
    sum = v*v + v1*v1;
    if (sum == (n*n)){
        return (true);
    }
    else{
        return(false);
    }
}