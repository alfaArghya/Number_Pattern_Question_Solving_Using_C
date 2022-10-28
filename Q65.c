#include<stdio.h>

int main(){
  
/*
    5
   45
  345
 2345
12345
*/

    for(int c = 5; c >= 1; c--){
        for(int b = 1; b <= c - 1; b++){
            printf(" ");
        }
        for(int a = c; a <= 5; a++){
            printf("%d",a);
        }
        printf("\n");
    }
  
  return 0;
}
