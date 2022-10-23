#include<stdio.h>

int main(){
  
/*
    1
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1
*/

    for(int c = 1; c <= 5; c++){
        for(int a = 1; a <= 5-c; a++){
            printf(" ");
        }
        for(int b = 1; b <= c; b++){
            if(b == 1){
                printf("%d ",c);
            }
            else if(b == c){
                printf("%d ",c);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

        //2nd part
        for(int c = 4; c >= 1; c--){
            for(int a = 1; a <= 5-c; a++){
                printf(" ");
            }
            for(int b = 1; b <= c; b++){
                if(b == 1){
                    printf("%d ",c);
                }
                else if(b == c){
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
