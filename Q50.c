#include<stdio.h>

int main(){
  
/*
1
3 2
4 5 6
10 9 8 7
11 12 13 14 15
*/
    int c = 1, d = 1;
    for(int b = 1; b <= 5; b++){
        d = c + b - 1;
        for(int a = 1; a <= b; a++){
            if(b%2 == 1){
                printf("%3d ", c);
            }
            else{
                printf("%3d ", d--);
            }
            c++;
        }
        printf("\n");
    }
  
  return 0;
}
