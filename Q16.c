#include<stdio.h>

int main(){
  
/*
13579                                1            -> b (start or initialise)
3579                                 3            -> b
579         --explain--> for(int a = 5; a <= 9; a++)
79                                   7            -> b
9                                    9            -> b (end)
            after every line we are doing b = b + 2, for that we got 1, 3, 5, 7, 9
*/
    for(int b = 1; b <= 9; b += 2){
        for(int a = b; a <= 9 ; a += 2){
            printf("%d",a);
        }
        printf("\n");
    }
  
  return 0;
}
