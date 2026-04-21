/*
    Realizza un programma in C che gestisca un menu con 5 scelte
*/

#include <stdio.h>
#include "mialib.c"
int main(){
    int f1;
    int f2;
    int f3;
    int f4;
    int f5;
    int a;
    int b;
    int c;
    int scelta;
    int cnt = 0;
    do{
        printf("-- MENU --\n");
        printf("1 -> Da' un numero compreso tra 2 valori ed è multiplo del terzo\n");
        printf("2 -> Visualizza i numeri inseriti in ordine crescente (Ho fatto il possibile, ma si deve inserire un numero non compreso nella scelta del case prima che stampi i num in serie)\n");
        printf("3 -> Visualizza l'area o il perimetro a seconda del caso\n");
        printf("4 -> Visualizza la media\n");
        printf("0 -> Termina Programma!\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch(scelta){
            case 1:{
                a = 4;
                b = 50;
                c = 3;
                int f1 = inputNumeroFiltrato(a, b, c);
                cnt++;
                break;
            }
            case 2:{
                printf("Inserire 3 valori: \n");
                scanf("%d, ", &a);
                scanf("%d, ", &b);
                scanf("%d\n", &c);
                int f2 = ordinaTreValori(a, b, c);
                break;
            }
            case 3:{
                printf("Inserire i due valori: ");
                scanf("%d ", &a);
                scanf("%d ", &a);
                f3 = determinaFigura(a, b);
                cnt++;
                break;
            }
            case 4:{
                
                cnt++;
                break;
            }
            default:{
                if(scelta != 0){
                    printf("Scelta non valida!\n");
                    printf("\n\n");
                }
                break;
            }
        }
    }while(scelta != 0);
    return(0);
}