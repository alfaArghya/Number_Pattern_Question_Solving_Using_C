#include<stdio.h>

int main(){
  
/*
1 1 1 1 1
1       1
1       1
1       1
1 1 1 1 1
*/
    for(int b = 1; b <= 5; b++){
        for(int a = 1; a <= 5;a++){
            if(b == 1 || b == 5 || a == 1 || a == 5){
                printf("1 ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
  
  return 0;
}
