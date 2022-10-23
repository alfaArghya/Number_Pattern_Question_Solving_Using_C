#include<stdio.h>

int main(){
  
/*
1       1
 2     2
  3   3
   4 4
    5
*/
    int d = 5;
    for(int c = 1; c <= 5; c++){
        
        for(int b = 1; b <= c-1; b++){
            printf(" ");
        }
        for(int a = 5; a >= c; a--){
            // printf("%d ",c);
            if(a == c){
                printf("%d ",c);
            }
            else if(a == d){
                printf("%d ",c);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
  return 0;
}
