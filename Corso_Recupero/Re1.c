/*Realizzare un programma C che richiede un numero N da tastiera, se N è compreso tra 5 e 15 (estremi
compresi) allora procede nel seguente modo: Genera random N numeri casuali da 1 a 25, se il numero generato
è pari allora sulla stessa riga visualizza i suoi divisori; se il numero generato è dispari allora sulla stessa riga
genera altrettanti numeri casuali compresi tra 1 e 10 calcolando e visualizzando la loro somma.
Se N non rispetta la condizione iniziale, viene verificato se si tratta di un numero primo oppure no con relativo
messaggio “Numero Primo” o “Numero Non Primo” stampato a video.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int r;
    int r2;
    int n;
    int div = 1;
    int i;
    int s;
    int cnt = 1;
    printf("Scrivere un numero compreso tra 5 e 15: ");
    scanf("%d", &n);
    if(n >= 5 || n <= 15){
        for(i = 1; i <= n; i++){
            r = 1 + rand()%25;
            printf("%d \n", r);
            div = 1;
            if(r % 2 == 0){
                do{
                    if(r % div == 0){
                        printf("-%d ", div);
                    }
                    div++;
                }while(div <= r);
            }
            else{
                s = 0;
                do{
                    s = s + r2;
                    r2 = 1 + rand()%10;
                    cnt++;
                    printf("#%d ", r2);
                }while(cnt == r);
                printf("+%d ", s);
            }
        }
    }
    else{
        cnt = 0;
        div = 0;
        if(n % div == 0){
            printf("%d \n", div);
            div++;
        }
        if(div <= 2){
            printf("Numero primo");
        }
        else{
            printf("Numero non primo");
        }
    }
}
