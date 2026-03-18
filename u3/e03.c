#include <stdio.h>
#include "mialib.c"

int main(){
    int num = 20;
    printf("Prossimo primo di %d: %d\n", num, nextPrimo(num));
    printf("Primo precedente a %d: %d\n", num, prevPrimo(num));
}
