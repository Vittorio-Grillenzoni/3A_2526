#include <stdio.h>
int main(){
    float pt=0;
    float p;
    int cnt=0;
    float m;
    do{
        printf("Inserire il valore del prodotto: ");
        scanf("%f", &p);
        pt = pt + p;
        cnt++;
    } while(p != 0);
    printf("%f\n", pt);
    m = pt/cnt;
    printf("%f\n", m);
    return 0;
}