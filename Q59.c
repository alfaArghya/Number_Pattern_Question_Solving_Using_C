#include<stdio.h>

int main(){ 
/*
86523
8652
865
86
8
*/
    for(int b = 5; b >= 1; b--){
        int c = 8, d = 2;
        for(int a = 1; a <= b; a++){
            if(a == 1 || a == 2){
                printf("%d",c);
                c-=2;
            }
            else if(a == 3){
                printf("5");
            }
            else{
                printf("%d",d);
                d++;
            }
        }
        printf("\n");
    }
  
  return 0;
}
