/*
Realizzare un programma C che richieda ripetutamente l’inserimento di 10 valori, per ogni valore comunica a
video i divisori primi e determina il numero totale di divisori.
Es: n=12 → 1,2,3 sono divisori primi ma sono presenti 6 divisori in totale. (12 è divisibile per 1,2,3,4,6,12)
*/
#include <stdio.h>

int main(){
    int n;
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    int n7;
    int n8;
    int n9;
    int d;
    int d1;
    int d2;
    int d3;
    int d4;
    int d5;
    int d6;
    int d7;
    int d8;
    int d9;
    int c;
    int c1;
    int c2;
    int c3;
    int c4;
    int c5;
    int c6;
    int c7;
    int c8;
    int c9;
    for(int i=0; i < 1; i++){
    printf("Inserisci il primo valore: \n");
    scanf("%d", &n);
    printf("Inserisci il secondo valore: \n");
    scanf("%d", &n1);
    printf("Inserisci il terzo valore: \n");
    scanf("%d", &n2);
    printf("Inserisci il quarto valore: \n");
    scanf("%d", &n3);
    printf("Inserisci il quinto valore: \n");
    scanf("%d", &n4);
    printf("Inserisci il sesto valore: \n");
    scanf("%d", &n5);
    printf("Inserisci il settimo valore: \n");
    scanf("%d", &n6);
    printf("Inserisci l' ottavo valore: \n");
    scanf("%d", &n7);
    printf("Inserisci il nono valore: \n");
    scanf("%d", &n8);
    printf("Inserisci il decimo valore: \n");
    scanf("%d", &n9);
    for(int i = 0; n != 0; i++ ){
        d = 2;
        n = n / d;
        printf("%d\n", n);
        c = c + 1;
        printf("%d\n", c);
    }
    for(int i = 0; n1 != 0; i++ ){
        d = 2;
        n1 = n1 / d1;
        printf("%d\n", n1);
        c1 = c1 + 1;
        printf("%d\n", c1);
    }
    for(int i = 0; n2 != 0; i++ ){
        d2 = 2;
        n2 = n2 / d2;
        printf("%d\n", n2);
        c2 = c2 + 1;
        printf("%d\n", c2);
    }
    for(int i = 0; n3 != 0; i++ ){
        d3 = 2;
        n3 = n3 / d;
        printf("%d\n", n3);
        c3 = c3 + 1;
        printf("%d\n", c3);
    }
    for(int i = 0; n4 != 0; i++ ){
        d4 = 2;
        n4 = n4 / d;
        printf("%d\n", n4);
        c4 = c4 + 1;
        printf("%d\n", c4);
    }
    for(int i = 0; n5 != 0; i++ ){
        d5 = 2;
        n5 = n5 / d;
        printf("%d\n", n5);
        c5= c5 + 1;
        printf("%d\n", c5);
    }
    for(int i = 0; n6 != 0; i++ ){
        d6 = 2;
        n6 = n6 / d6;
        printf("%d\n", n6);
        c6 = c6 + 1;
        printf("%d\n", c6);
    }
    for(int i = 0; n7 != 0; i++ ){
        d7 = 2;
        n7 = n7 / d7;
        printf("%d\n", n7);
        c7 = c7 + 1;
        printf("%d\n", c7);
    }
    for(int i = 0; n8 != 0; i++ ){
        d8 = 2;
        n8 = n8 / d8;
        printf("%d\n", n8);
        c8 = c8 + 1;
        printf("%d\n", c8);
    }
    for(int i = 0; n9 != 0; i++ ){
        d9 = 2;
        n9 = n5 / d9;
        printf("%d\n", n9);
        c9= c9 + 1;
        printf("%d\n", c9);
    }
    }

}