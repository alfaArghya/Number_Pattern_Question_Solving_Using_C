#include<stdio.h>

int main(){
  
/*
    1
   21
  321
 4321
54321
*/

    for(int c = 1; c <= 5; c++){
        for(int b = 1; b <= 5 - c; b++){
            printf(" ");
        }
        for(int a = c; a >= 1; a--){
            printf("%d",a);
        }
        printf("\n");
    }
  
  return 0;
}
