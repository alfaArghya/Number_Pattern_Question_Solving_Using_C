#include<stdio.h>

int main(){
  
/*
11111
0000
111   --explain--> use Q1 to understand
00
1
*/

    for(int b = 5; b >= 1; b--){
        for(int a = 1; a <= b; a++){
            printf("%d", b%2);
        }
        printf("\n");
    }
  
  return 0;
}
