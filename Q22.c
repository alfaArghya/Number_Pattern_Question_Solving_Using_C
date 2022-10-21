#include<stdio.h>

int main(){
  
/*
                                              (I)                                               (II)      (III)
1234554321                                    12345    (start or initialize) d <-  5                      54321                              5 -> d (start or initialize)
1234**4321                                    1234                           d <-  4             **        4321                              4 -> d
123****321      --devided it into 3 pieces--> 123 --Explain--> for(int a = 1; a <= 3; a++)  +   ****    +   321 --explain III--> for(int c = 3; c >= 1; c--)
12******21                                    12                             d <-  2        +  ******   +    21                              2 -> d
1********1                                    1                        (End) d <-  1        + ********  +     1                              1 -> d (End) 

(I) --> follow Q01
*/
    for(int d = 5; d >= 1; d--){
        for(int a = 1; a <= d; a++){
            printf("%d",a);
        }
        for(int b = 1; b <= (5 - d) * 2; b++){
            printf("*");
        }
        for(int c = d; c >= 1; c--){
            printf("%d",c);
        }
        printf("\n");
    }
    
  // another way -->
  for(int e = 5; e >= 1; e--){
        for(int a = 1; a <= e; a++){
            printf("%d",a);
        }
        for(int b = 1; b <= 5 - e; b++){
            printf("*");
        }
        for(int c = 1; c <= 5 - e; c++){
            printf("*");
        }
        for(int d = e; d >= 1; d--){
            printf("%d",d);
        }
        printf("\n");
    }
  
  return 0;
}
