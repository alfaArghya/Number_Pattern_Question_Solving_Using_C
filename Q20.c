#include<stdio.h>

int main(){
  
/*
1
2 6
3 7 10
4 8 11 13 
5 9 12 14 15
*/
    
    for(int a = 1; a <= 5; a++){
        printf("%d ",a);
        int b = 4;
        int c = b + a;
        for(int j = 1; j < a; j++){
            printf("%d ",c);
            b--;
            c += b;
        }
        printf("\n");
    }
  
  return 0;
}
