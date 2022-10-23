#include<stdio.h>

int main(){

/*
11                          11 = 9 + 1(a) + 1(b)
12 13                       12 = 9 + 1(a) + 2(b); 13 = 9 + 2(a) + 2(b)
13 14 15       --explain--> 13 = 9 + 1(a) + 3(b); 14 = 9 + 2(a) + 3(b); 15 = 9 + 3(a) + 3(b) 
14 15 16 17                 13 = 9 + 1(a) + 4(b);.......Fill this by yourself......;17 = 9 + 4(a) + 4(b)
15 16 17 18 19              15 = 9 + 1(a) + 5(b);...........Fill this by yourself...........;19 = 9 + 5(a) + 5(b)
*/
    
    for(int b = 1; b <= 5; b++){
        for(int a = 1; a <= b; a++){
            printf("%d ", 9+a+b); // 9+a+b is printing 11 to 19
        }
        printf("\n");
    }
  
  return 0;
}
