#include <stdio.h>

int main(){
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int media = 0;
    printf("Inserire il primo valore: ");
    scanf("%d", &n1);
    printf("Inserire il secondo valore: ");
    scanf("%d", &n2);
    printf("Inserire il terzo valore: ");
    scanf("%d", &n3);
    printf("Inserire il quarto valore: ");
    scanf("%d", &n4);
    printf("Inserire il quinto valore: ");
    scanf("%d", &n5);
    if(n1 < n2 && n3 && n4 && n5){
        printf("Il primo valore inserito e' quello minore.\n");
    }
    else if(n2 < n1 && n3 && n4 && n5){
        printf("Il secondo valore e' quello più piccolo tra i cinque.\n");
    }
    else if(n3 < n1 && n2 && n4 && n5){
        printf("Il terzo valore e' il più piccolo tra quelli inseriti.\n");
    }
    else if(n4 < n1 && n2 && n3 && n5){
        printf("Il quarto valore e' il più piccolo tra quelli inseriti.\n");
    }
    else if(n5 < n1 && n2 && n3 && n4){
        printf("Il quinto numero e' il più piccolo tra quelli inseriti.\n");
    }
    if(n1 > n2 && n3 && n4 && n5){
        printf("Il primo valore inserito e' quello maggiore.\n");
    }
    else if(n2 > n1 && n3 && n4 && n5){
        printf("Il secondo valore e' quello più grande tra i cinque.\n");
    }
    else if(n3 > n1 && n2 && n4 && n5){
        printf("Il terzo valore e' il più grande tra quelli inseriti.\n");
    }
    else if(n4 > n1 && n2 && n3 && n5){
        printf("Il quarto valore e' il più grande tra quelli inseriti.\n");
    }
    else if(n5> n1 && n2 && n3 && n4){
        printf("Il quinto numero e' il più grande tra quelli inseriti.\n");
    }
    media = (n1 + n2 + n3 + n4 + n5) / 5;
    printf("La media tra i cinque valori e': %d\n", media);
}