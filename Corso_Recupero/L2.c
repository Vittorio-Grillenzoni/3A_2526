/*Leggi due interi div e max, controllando che div sia tra 2 e 10 e max tra 50 e 1000 
con un ciclo for stampa i numeri tra div e max che sono multipli di div;
alla fine stampa la somma e la media*/
#include <stdio.h>
int main(){
    int div;
    int max;
    int s;
    int m;
    do{
        printf("Inserire un numero tra 2 e 10: ");
        scanf("%d", &div);
    }while(div<2 || div>10);
    do{
        printf("Inserire un numero tra 50 e 1000: ");
        scanf("%d", &max);
    }while(max<50 || max>1000);
    for(int cnt=div; cnt<=max; cnt++){
        if(cnt%div == 0){
            printf("%d è un multiplo \n", cnt);
        }
        else{
            printf("%d non è un multiplo di div \n", cnt);
        }
    }
    s = div + max;
    m = s/2;
    printf("%d è la somma delle due variabili \n", s);
    printf("%d è la media tra le due variabili \n", m);
    return 0;
}