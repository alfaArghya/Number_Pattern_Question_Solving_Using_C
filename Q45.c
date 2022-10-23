#include<stdio.h>

int main(){
  
/*
5 5 5 5 5 5 5 5 5                               5 5 5 5 5   +   5 5 5 5
5 4 4 4 4 4 4 4 5                               5 4 4 4 4   +   4 4 4 5
5 4 3 3 3 3 3 4 5   --break it into 2 pieces--> 5 4 3 3 3   +   3 3 4 5
5 4 3 2 2 2 3 4 5                               5 4 3 2 2   +   2 3 4 5
5 4 3 2 1 2 3 4 5                               5 4 3 2 1   +   2 3 4 5
*/

    int c = 5; 
    for(int b = c; b >= 1; b--){
      //first piece
        for(int a = c; a >= 1; a--){
            if (a>b){
                printf("%d",a);
            }
            else{
                printf("%d",b);
            }
        }
      //second piece
        for(int a = 2; a <= c; a++){
            if(a>b){
                printf("%d",a);
            }
            else{
                printf("%d",b);
            }
        }
        printf("\n");
    }
  
  return 0;
}
