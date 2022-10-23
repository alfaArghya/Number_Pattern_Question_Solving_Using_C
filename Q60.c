#include<stdio.h>

int main(){
  
/*
3
32
325
3256
32568
*/

    for(int b = 1; b <= 5; b++){
        int c = 3, d = 6;
        for(int a = 1; a <= b; a++){
            if(a == 1 || a == 2){
                printf("%d",c);
                c--;
            }
            else if(a == 3){
                printf("5");
            }
            else{
                printf("%d",d);
                d+=2;
            }
        }
        printf("\n");
    }
  
  return 0;
}
