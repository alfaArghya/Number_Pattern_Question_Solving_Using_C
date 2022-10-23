#include<stdio.h>

int main(){
  
/*
                  1
              4   9  16
         25  36  49  64  81
    100 121 144 169  196 225 256
289 324 361 400 441 484 529 576 625
*/
    int d = 1, e = 0;
    for(int c = 1; c <= 5; c++){
        for(int a = 1; a <= 5-c; a++){
            printf("    ");
        }
        for(int b = 1; b <= c+e; b++){
            printf("%3d ", d*d );   //%3d is used to occupie 3 place for 1 integer
            d++;
        }
        e++;
        printf("\n");
    }
  
  return 0;
}
