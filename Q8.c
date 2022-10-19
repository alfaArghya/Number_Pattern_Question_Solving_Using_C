#include<stdio.h>

int main(){
  
/*
5                                                   5     -> b (start or initialise)
54                                                  4     -> b
543        ---> Explanation --> for(int a = 5; a => 3; a--)
5432                                                2     -> b
54321                                               1     -> b (end)
*/
    for(int b = 5; b >= 1; b--){
        for(int a = 5; a >= b; a--){
            printf("%d",a);
        }
        printf("\n");
    }
  
  return 0;
}
