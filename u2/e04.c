/*
Creare un programma C che richiede tre valori, determina se sono in ordine crescente e in caso affermativo se sono una terna pitagorica. (vedere cos'è una terna pitagorica in internet).
*/
#include <stdio.h>

int main(void) {
    int n1;
    int n2;
    int n3;
    printf("Inserire n1: ");
    scanf("%d", &n1);
    printf("Inserire n2: ");
    scanf("%d", &n2);
    printf("Inserire n3: ");
    scanf("%d", &n3);
    if (n1>n2) {
        if (n2>n3) {
            printf("I numeri sono in ordine crescente: ", n3, n2, n1);
        }
        else{
            printf("I numeri non sono in ordine crescente");
        };
    }
    else{
        printf("I numeri non sono in ordine crescente");
    };
    if(n1^2+n2^2 == n3^2) {
        printf("I numeri danno una terna pitagorica");
    }
    else{
        printf("I numeri non danno una terna pitagorica");
    }
    return(0);
}