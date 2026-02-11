#include <stdio.h>

int main(){
    printf("Hello world...\n");
    return(0);
}
/*
    1.gcc nomefile.c-> Compila il file e può avere due risultati:
        1-> Tutto bene viene creato il file a.out (eseguibile)
        2-> Ci sono errori nella sintassi del codice che devono essere risolti.
    2. Ottenuto il file a.out per eseguirlo digitare
        ./a.out (esegue il file terminale)

    è possibile unificare compilazione e esecuzione in un solo comando
    gcc nomefile.c && ./a.out
*/