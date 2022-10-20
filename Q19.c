#include<stdio.h>

int main(){
  
/*
1
2 3
4 5 6
7 8 9 10
*/
    int c=1; 
    for(int b = 1; b<5; b++){
        for(int a = 1; a <= b; a++){
            printf("%d ",c++); // here we are addjng 1 with previous c for generate new numbers.
        }
        printf("\n");
    }
  
  return 0;
}
