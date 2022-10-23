#include<stdio.h>

int main(){
  
/*
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
*/


    for(int b = 1; b <= 5; b++){
        int c = b, d = 4;
        for(int a = 1; a <= b; a++){
            if(a == 1){
                printf("%d ", c);
            }
            else{
                c = c + d;
                printf("%d ", c);
                d--;
            }
        }
        c++;
        printf("\n");
    }
  
  return 0;
}
