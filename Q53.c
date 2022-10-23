#include<stdio.h>

int main(){
  
/*
1       1
 2     2
  3   3
   4 4 
    5
   4 4
  3   3
 2     2
1       1
*/

// part 1
    int d = 5;
    for(int c = 1; c <= 5; c++){
        
        for(int b = 1; b <= c-1; b++){
            printf(" ");
        }
        for(int a = 5; a >= c; a--){
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

    //part 2
    int e = 1;
    for(int c = 2; c <= 5; c++){
        d--;
        for(int b = 5-c; b >= 1; b--){
            printf(" ");
        }
        for(int a = 1; a <= c; a++){
            if(a == e){
                printf("%d ", d);
            }
            else if(a == c){
                printf("%d ", d);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
  
  return 0;
}
