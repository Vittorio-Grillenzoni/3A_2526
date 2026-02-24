#include <stdio.h>

int main(){
    int N;
    int cnt = 1;
    int div;
    int F;

    do{
        printf("Inserisci un valore tra 1 e 10: ");
        scanf("%d\n", &N);
    } while(N < 1 || N > 10);
    printf("--Inserito: %d\n", N);

    if(N % 2 == 0){
        div = N/2;
        do{
            N = N + div;
            cnt++;
        }while(F < 1000);
        printf ("Ci sono voluti %d passaggi\n", cnt);
    }
    else{
        F = N++;
        cnt++;
        printf ("Ci sono voluti %d passaggi\n", cnt);
    }
    return 0;
}