//header contenente solamente i prototipi e relativa documentazione
//delle funzioni di libreria
/**
 * @param int* Riferimento al vettore da inizializzare
 * @param int Dimensione del vettore
 */
void initVettore(int _vet[], int _dim);

/**
 * Visualizza un vettore di valori interi
 * @param int* Riferimento al vettore da visualizzare
 * @param int Dimensione del vettore
 */
void stampaVettore(int _vet[], int _dim);

/**
 * Stampa un vettore in formato grafico, rettangolando secondo i codice della tabella
 * ASCII in modo da realizzare le singole celle, sotto alle celle sono visualizzati
 * gli indici del vettore.
 * @param int* Riferimento al vettore da visualizzare
 * @param int Dimensione del vettore
 */
void stampaVettoreGrafico(int _vet[], int _dim);