#include<stdio.h>

int main(){
  
/*
                                   (use Q2)
12345                               12345   +       
23451                               2345    +      1
34521   --devide it into 2 piece--> 345     +     21
45321                               45      +    321 
54321                               5       +   4321
*/

    for(int c = 1; c <= 5; c++){
        for(int a = c; a <= 5; a++){
            printf("%d",a);
        }
        for(int b = c-1; b >= 1; b--){
            printf("%d", b);
        }
        printf("\n");
    }
  
  return 0;
}
