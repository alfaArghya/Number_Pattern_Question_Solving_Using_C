#include<stdio.h>

int main(){
  
/*
54321                                       5             -> b (start or initialise)
4321                                        4             -> b
321        ---> Explanation --> for(int a = 3; a >= 1; a--)
21                                          2             -> b
1                                           1             -> b (end)
*/
    for(int b = 5; b >= 1; b--){
        for(int a = b; a >= 1; a--){
            printf("%d",a);
        }
        printf("\n");
    }
  
  return 0;
}
