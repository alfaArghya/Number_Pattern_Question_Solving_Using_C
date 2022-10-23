#include<stdio.h>

int main(){
  
/*
1
232
34543
4567654
567898765
*/

    for(int c = 1; c <= 5; c++){
        int d = c;
        for(int a = 1; a <= c; a++){
            printf("%d", d++);
        }
        d-=2;
        for(int b = 1; b < c; b++){
            printf("%d", d--);
        }
        printf("\n");
    }
  
  return 0;
}
