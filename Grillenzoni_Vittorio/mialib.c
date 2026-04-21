/*  Contiene il codice C delle diverse funzioni che compongono la mia libreria. */
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "mialib.h"

int inputNumeroFiltrato(int _x, int _y, int _z){
    int v;
    printf("Inserire il valore: ");
    scanf("%d", &v);
    if(v >= _x && v <= _y){
        printf("Il numero e' minore di y e maggiore di x ");
        if(v % _z == 0){
            printf("ed e' un multiplo di z: %d\n", v);
        }
        else{
            printf("ma non è un multiplo di z (RIPROVA!)\n");
        }
    }
    return(v);
}

int ordinaTreValori(int _x, int _y, int _z){
    int r;
    if(_x > _y && _x > _z){
        if(_y > _z){
            printf("%d, %d, %d\n", _z, _y, _x);
        }
        else{
            printf("%d, %d, %d\n", _y, _z, _x);
        }
    }
    else if(_y > _x && _y > _z){
        if(_x > _z){
            printf("%d, %d, %d\n", _z, _x, _y);
        }
        else{
            printf("%d, %d, %d\n", _x, _z, _y);
        }
    }
    else if(_z > _x && _z > _y){
        if(_x > _y){
            printf("%d, %d, %d\n", _y, _x, _z);
        }
        else{
            printf("%d, %d, %d\n", _x, _y, _z);
        }
    }
    return(r);
}

int determinaFigura(int _x, int _y){
    int area=0;
    int perimetro=0;
    if(_x == 0 || _y == 0){
        printf("-1");
    }
    else if(_x == _y){
        perimetro = perimetro + (_x*2 + _y*2);
        printf("Il perimetro e': %d", perimetro);
    }
    else if(_x != _y){
        area = _x * _y;
        printf("L'area e': %d", area);
    }
    return(area);
}

int randomValoreRange(int _min, int _max){
    int random;
    random = _min + rand()%(_max - _min + 1);
    return(random);
}