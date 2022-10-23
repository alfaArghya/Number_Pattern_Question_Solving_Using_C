#include<stdio.h>

int main(){
  
/*
             1                                                             1  -->    c (start or initialise)    <--  1
          2  3                                                             2  -->              c                <--  2
       4  5  6    --explain-->  (printing space)-> for(int a = 1; a <= 5 - 3; a++) + (printing number)-> for(int b = 3; b >= 1; b--) 'Note-> a & b are using as position'
    7  8  9 10                                                             4  -->              c                <--  4
11 12 13 14 15                                                             5  -->           c(end)              <--  5
*/
    int d = 1;
    for(int c = 1; c <= 5; c++){
        for(int a = 1; a <= 5-c; a++){
            printf("   ");
        }
        for(int b = c; b >= 1; b--){
            printf("%3d",d++); //d is used to print a increasing values
        }
        printf("\n");
    }
  
  return 0;
}

// note -> here d++ means first do d = 1 then do d = d + 1 = 2; that's how 1 to 15 is printing
