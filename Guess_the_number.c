/*Realizzare un programma "Guess the Code" che operi nel seguente modo:  
All'avvio il programma inizializza cinque variabili chiamate c1 c2 c3 c4 c5 con cinque valori interi positivi compresi tra 0 e 9
(per la fase di sviluppo inserirli a mano da codice sorgente), successivamente propone all'untente l'inserimento di cinque valori in altrettante variabili
 chiamate u1 u2 u3 u4 u5. Il programma verifica se le cifre u corrispondono con le cifre c (ovviamente di pari posizione u1-c1, u2-c2)
e mostra all'utente la cifra dove ha indovinato mentre un '?' dove la cifra inserita è errata. Il programma tiene conto dei tentativi effettuati dall'utente
ed il programma termina quando l'utente identifica tutte e cinque le cifre del codice.
*/

#include <stdio.h>

int main(void) {
    int c1 = 3; int c2 = 0; int c3 = 8; int c4 = 4; int c5 = 6;
    int u1; int u2; int u3; int u4; int u5;
    int count = 0; int cifreIndovinate = 0;
    printf("Benvenuto in Guess the number!Perfavore inserire i 5 valori: ");
    scanf("%d", &u1);
    scanf("%d", &u2);
    scanf("%d", &u3);
    scanf("%d", &u4);
    scanf("%d", &u5);
    while( u1 == c1 && u2 == c2 && u3 == c3 && u4 == c4 && u5 == c5 ){
        count = count + 1;
        if( u1 == c1){
            printf( int c1 );
            cifreIndovinate = cifreIndovinate + 1;
        }
        else{
            printf("?");
        }
        if( u2 == c2){
            printf( int c2 );
            cifreIndovinate = cifreIndovinate + 1;
        }
        else{
            printf("?");
        }
        if( u3 == c3){
            printf( int c3 );
            cifreIndovinate = cifreIndovinate + 1;
        }
        else{
            printf("?");
        }
        if( u4 == c4){
            printf( int c4 );
            cifreIndovinate = cifreIndovinate + 1;
        }
        else{
            printf("?");
        }
        if( u5 == c5){
            printf(  intc5 );
            cifreIndovinate = cifreIndovinate + 1;
        }
        else{
            printf("?");
        }
        if (cifreIndovinate == 5){
            printf("Hai vinto!!");
        }
        else {
            printf("Hai perso, ma riprova, magari hai fortuna");
        }
    }
}