#include<stdio.h>

int main(){
  
/*
    1
   12
  123
 1234
12345
*/

    // int n = 1;
    for(int c = 1; c <= 5; c++){
        for(int b = 1;  b <= 5-c; b++){
            printf(" ");
        }
        for(int a = 1; a <= c; a++){
            printf("%d", a);
        }
        // n++;
        printf("\n");
    }
  
  return 0;
}
