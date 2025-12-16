#include <stdio.h>

int main(){
    int n1;
    int n2;
    int n3;
    int count = 0;
    int div = 2;
    printf("Inserire il primo valore: ");
    scanf("%d", &n1);
    printf("Inserire il secondo valore: ");
    scanf("%d", &n2);
    printf("Inserire il terzo valore: ");
    scanf("%d", &n3);
    if(n1 < n2 && n3){
        printf("Il primo valore inserito e' quello minore.\n");
    }
    else if(n2 < n1 && n3){
        printf("Il secondo valore e' quello più piccolo tra i tre.\n");
    }
    else if(n3 < n1 && n2){
        printf("Il terzo valore e' il più piccolo tra quelli inseriti.\n");
    }
    if(n1 > n2 && n3){
        printf("Il primo valore inserito e' quello maggiore.\n");
    }
    else if(n2 > n1 && n3){
        printf("Il secondo valore e' quello più grande tra i tre.\n");
    }
    else if(n3 > n1 && n2){
        printf("Il terzo valore e' il più grande tra quelli inseriti.\n");
    }
    while(n1 != 0){
        n1 = n1 / div;
        printf("%d*", div);
        if(n1 == 0){
            printf("\n");
        }
        else{

        }
    }
    while(n2 != 0){
        n2 = n2 / div;
        printf("%d*", div);
        if(n2 == 0){
            printf("\n");
        }
        else{
            
        }
    }
    while(n3 != 0){
        n3 = n3 / div;
        printf("%d*", div);
        if(n3 == 0){
            printf("\n");
        }
        else{
            
        }
    }
}