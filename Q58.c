#include<stdio.h>

int main(){
  
/*
1  2  3  4  5
16          6
15          7
14          8
13 12 11 10 9
*/
    int c = 16, d = 6;
    for(int a = 1; a <= 5; a++){
        printf("%2d ", a);
    }
    printf("\n");
    for(int b = 1; b <= 3; b++){
        for(int a = 1; a <= 5; a++){
            if(a == 1){
                printf("%2d ",c);
            }
            else if(a == 5){
                printf("%2d ",d);
            }
            else{
                printf("   ");
            }
        }
        c--;
        d++;
        printf("\n");
    }
    for(int a = 13; a >= 9; a--){
        printf("%2d ",a);
    }
    printf("\n");
  
  return 0;
}
