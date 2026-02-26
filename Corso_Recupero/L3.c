/* stampa questo con for annidati:
* * * * *
  * * * *
    * * *
      * *
        *
      - -
    - - -
  - - - -
- - - - -
*/
#include <stdio.h>
int main(){
    int n;
    for(n=1; n<=5; n++){
        printf("* ");
    }
    printf("\n");
    for(n=1; n<=5; n++){
        if(n <= 1){
          printf("  ");
        }
        else{
          printf("* ");
        }
    }
    printf("\n");
    for(n=2; n<=5; n++){
        if(n <= 2){
          printf("  ");
        }
        else{
          printf("* ");
        }
    }
    printf("\n");
    for(n=3; n<=5; n++){
        if(n <= 3){
          printf("  ");
        }
        else{
          printf("* ");
        }
    }
    printf("\n");
    for(n=4; n<=5; n++){
        if(n <= 4){
          printf("  ");
        }
        else{
          printf("* ");
        }
    }
    printf("\n");
    for(n=3; n<=5; n++){
        if(n <= 3){
          printf("  ");
        }
        else{
          printf("- ");
        }
    }
    printf("\n");
    for(n=2; n<=5; n++){
        if(n <= 2){
          printf("  ");
        }
        else{
          printf("- ");
        }
    }
    printf("\n");
    for(n=1; n<=5; n++){
        if(n <= 1){
          printf("  ");
        }
        else{
          printf("- ");
        }
    }
    printf("\n");
    for(n=1; n<=5; n++){
          printf("- ");
    }
    printf("\n");
    return 0;
}