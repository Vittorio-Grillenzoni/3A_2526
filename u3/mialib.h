/*Contiene solo i prototipi delle funzioni che vado a sviluppare 
per la mia libreria personale*/
/*
Verifica se il numero è una terna pitagorica
@param int _n1
@param int _n2
@param int _n3
*/
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

/**
 * Inserimento controllato di un valore intero tra min e max estremi compresi
 * @param int Valore minimo accettato
 * @param int Valore massimo accettato
 * @return Valore inserito dall'utente valido e nel range min-max
 */
int inputValoreRange(int _min, int _max);

/**
 * Genera un valore random compreso tra due valori interi min e max, estremi compresi
 * @param int Valore minimo accettato
 * @param int Valore massimo accettato
 * @return Valore random generato compreso nel range min-max
 */
int randomValoreRange(int _min, int _max);

/**
 * Visualizza a video N numeri casuali primi (compresi tra 1 e 999) successivi ad un valore di riferimento
 * @param int Valore di riferimento
 * @param int Numero di valori da visualizzare
 */
int visualizzaPrimi(int _val, int _n);
