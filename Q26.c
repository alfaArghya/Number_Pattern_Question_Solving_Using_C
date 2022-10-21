#include<stdio.h>

int main(){
  
/*
1
121
12321   
1234321
123454321
*/
    for(int b = 1; b <= 9; b+=2){
        for(int a = 1; a <= b; a++){
            if( ((b+1)/2) >= a ){
                printf("%d",a);
            }
            else{
                printf("%d",b+1-a);
            }

        }
        printf("\n");
    }
  
  return 0;
  
}
