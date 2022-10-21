#include<stdio.h>

int main(){
  
/*
5432*
543*1
54*21   --explain--> it is a simple 5 x 5 pattern but when our b and a are equal(b == a) we have to print '*'
5*321
*4321
*/
    for(int b = 1; b <= 5; b++){
        for(int a = 5; a >= 1; a--){
            if(b == a){
                printf("*");
            }
            else{
                printf("%d",a);
            }
        }
        printf("\n");
    }
  
  return 0;
}
