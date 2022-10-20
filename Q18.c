#include<stdio.h>

int main(){
  
/*
5 5 5 5 5                                 5 * * * *
4 5 5 5 5                                 4 5 * * *
3 4 5 5 5     -- we can write this way--> 3 4 5 * *     --> now we can use explation of Q06 for the number part and for '*' part we need to use another loop 
2 3 4 5 5                                 2 3 4 5 *
1 2 3 4 5                                 1 2 3 4 5
*/
    for(int b = 5; b >= 1; b--){
        for(int a = b; a <= 5; a++){
            printf("%d ",a);
        }
        for(int c = 1; c <= b - 1; c++){
            printf("%d ",5);
        }
        printf("\n");
    }
  
  return 0;
}
