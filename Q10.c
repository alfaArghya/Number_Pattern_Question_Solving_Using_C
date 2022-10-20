#include<stdio.h>

int main(){
  
/*
5                                                   5     -> b
44                                                  4     -> b
333               explain --> for(int a = 1; a <= 6-3; a++)
2222                                                2     -> b
11111                                               1     -> b
                  here we are printing b, that's why every line have same number.
*/
    for(int b = 5; b >= 1; b--){
        for(int a = 1; a <= 6-b; a++){
            printf("%d",b);
        }
        printf("\n");
    }
  
  //another way -->
    for(int b = 5; b >= 1; b--){
        for(int a = b; a <= 5; a++){
            printf("%d",b);
        }
        printf("\n");
    }
  
  return 0;
}
