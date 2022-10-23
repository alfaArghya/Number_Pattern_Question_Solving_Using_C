#include<stdio.h>

int main(){
  
/*
        5                                             5 -->            c (start or initialise)               <-- 5
      5 4                                             4 -->                     c                            <-- 4
    5 4 3    --explain--> (print space)-> for(int a = 3-1; a >= 1; a--)  +  (print number)-> for(int b = 5; b >= 3; b--)
  5 4 3 2                                             2 -->                     c                            <-- 2
5 4 3 2 1                                             1 -->                 c (end)                          <-- 1
*/
    for(int c = 5; c >= 1; c--){
        for(int a = c-1; a >= 1; a--){
            printf("  ");
        }
        for(int b = 5; b >= c; b--){
            printf("%d ",b);
        }
        printf("\n");
    }
  
  return 0;
}
