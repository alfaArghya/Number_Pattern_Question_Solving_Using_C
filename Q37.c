#include<stdio.h>

int main(){
  
/*
 1  2  3  4  5
 6  7  8  9 
10 11 12
13 14 
15
*/

    int c = 1;
    for(int b = 5; b >= 1; b--){
        for(int a = 1; a <= b; a++){
            printf("%3d", c++); //%3d is used to occupied 3 place for 1 integer
        }
        printf("\n");
    }
  
  return 0;
}

// note -> here d++ means first do d = 1 then do d = d + 1 = 2; that's how 1 to 15 is printing
