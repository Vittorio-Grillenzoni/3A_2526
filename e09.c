/*
Relizza un programma che visualizza tutti i numeri da n inserito da tastiera
e per ogni numero visualizza i suoi divisori
*/
#include <stdio.h>

int main(){
    int n1;
    int n2 = 0;
    int count = 0;
    int div = 1;
    printf("Inserire un valore: ");
    scanf("%d", &n1);
    printf("Ecco tutti i numeri da 0 al numero inserito: ");
    while ( n2 == n1 ) {
        n2 = n2 + 1;
        printf(" (%d) \n ", n2);
    }
    while( div == n1){
        if( n1%div == 0 ){
          printf("Il numero è divisibile per: %d", div);
        }
        else{
            printf("Il numero non è divisibile per: %d ", div);
        }
    }
return 0;
}