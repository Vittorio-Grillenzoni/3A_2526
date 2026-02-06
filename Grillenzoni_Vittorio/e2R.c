/*
Realizzare un programma C che richieda ripetutamente l’inserimento di 10 valori, per ogni valore comunica a
video i divisori primi e determina il numero totale di divisori.
Es: n=12 → 1,2,3 sono divisori primi ma sono presenti 6 divisori in totale. (12 è divisibile per 1,2,3,4,6,12)
*/
#include <stdio.h>

int main(){
    int n;
    int cnt;
    int cnt2 = 0;
    int cnt3 = 0;
    int d = 1;
    int v = 1;
    for(cnt = 0; cnt < 10; cnt++){
        printf("Inserire un valore: ");
        scanf("%d", &n);
        printf("\n n: %d -> ", n);
        while(d <= n){
            if(n % d == 0){
                cnt2++;
                while(v <= d){
                    if(d % v == 0){
                        cnt3++;
                    }
                    v++;
                }
                if(cnt3 <= 2){
                    printf("%d ", d);
                }
                cnt3 = 0;
            }
            d++;
        }
        printf("divisori totali: %d \n", cnt2);
        cnt2 = 0;
    }
return (0);
}