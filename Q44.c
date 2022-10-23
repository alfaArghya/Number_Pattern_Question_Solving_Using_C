#include<stdio.h>

int main(){
  
/*
*OOO*OOO*                             *OOO  + * + OOO*
O*OO*OO*O   --devide into 3 piece-->  O*OO  + * + OO*O
OO*O*O*OO                             OO*O  + * + O*OO
OOO***OOO                             OOO*  + * + *OOO
*/

    for(int b = 1; b <= 4; b++){
        for(int a = 1; a <= 4; a++){
            if (b == a){
                printf("*");
            }
            else{
                printf("O");
            }
        }
        printf("*");
        for(int a = 4; a >= 1; a--){
            if(b == a){
                printf("*");
            }
            else{
                printf("O");
            }
        }
        printf("\n");
    }
  
  return 0;
}
