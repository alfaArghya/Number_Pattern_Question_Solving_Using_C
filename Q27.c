#include<stdio.h>

int main(){
  
/*
0
909
89098
7890987
678909876
56789098765
4567890987654
345678909876543
23456789098765432
1234567890987654321
*/
    for(int c = 10; c >= 1; c--){
        for(int a = c; a < 10; a++){
            printf("%d ",a);
        }
        printf("O ");
        for(int b = 9; b >= c; b--){
            printf("%d ", b);
        }
        printf("\n");
    }
  
  return 0;
}
