#include<stdio.h>

int main(){

/*
    1                                                     1 -> c (start or initialize)<- 1
   21                                                     2 ->            c           <- 2
  321   --2 different loops--> (l1) for(int a = 1; a <= 5-3; a++)   &   (l2) for(int b = 3; b >= 1; b--)
 4321                                                     4 ->            c           <- 4
54321                                                     5 ->       c (End)           <- 5
*/
    for(int c = 1; c <= 5; c++){
        for(int a = 1; a <= 5-c; a++){
            printf(" ");
        }
        for(int b = c; b >= 1; b--){
            printf("%d",b);
        }
        printf("\n");
    }
  
  return 0;
}
