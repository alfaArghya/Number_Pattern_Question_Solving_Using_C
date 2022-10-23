#include<stdio.h>

int main(){
  
/*
        1
      1  2
    1  2  3
  1  2  3  4
1  2  3  4  5
*/
    for(int c = 1; c <= 5; c++){
        for(int a = 1; a <= 5-c; a++){
            printf(" ");
        }
        for(int b = 1; b <= c; b++){
            printf("%2d", b);
        }
        printf("\n");
    }
  
  return 0;
}
