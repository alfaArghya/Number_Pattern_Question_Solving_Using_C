#include<stdio.h>

int main(){
  
/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/

    for(int d = 1; d <= 5; d++){
        for(int a = 1; a <= 5-d; a++){
            printf("  ");
        }
        for(int b = 1; b <= d; b++){
            printf("%d ", b);
        }
        for(int c = d-1; c >= 1; c--){
            printf("%d ",c);
        }
        printf("\n");
    }
  
  return 0;
}
