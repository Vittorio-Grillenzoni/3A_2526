#include <stdio.h>

int main(void) {
    int c1 == 3;    int c2 == 0;    int c3 == 8;    int c4 == 4;    int c5 == 6;
    int u1; int u2; int u3; int u4; int u5;
    int count == 0;
    printf("Benvenuto in Guess the number!Perfavore inserire i 5 valori: ");
    scanf("%d", &u1);
    scanf("%d", &u2);
    scanf("%d", &u3);
    scanf("%d", &u4);
    scanf("%d", &u5);
    while( u1 == c1 && u2 == c2 && u3 == c3 && u4 == c4 && u5 == c5 ){
        if( u1 == c1){
            printf( c1 );
        }
        else{
            printf("?");
        }
        if( u2 == c2){
            printf( c2 );
        }
        else{
            printf("?");
        }
        if( u3 == c3){
            printf( c3 );
        }
        else{
            printf("?");
        }
        if( u4 == c4){
            printf( c4 );
        }
        else{
            printf("?");
        }
        if( u5 == c5){
            printf( c5 );
        }
        else{
            printf("?");
        }
    }
}