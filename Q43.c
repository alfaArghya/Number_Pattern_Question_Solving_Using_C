#include<stdio.h>

int main(){
  
/*
    1   //start of 1st half
   123
  12345
 1234567
123456789   //end of 1st half
 1234567    //start of 2nd half
  12345
   123
    1   //end of 2nd half
*/
    int d = 0;
    //first half
    for(int c = 1; c <= 5; c++){
        for(int a = 1; a <= 5-c; a++){
            printf(" ");
        }
        for(int b = 1; b <= c+d; b++){
            printf("%d",b);
        }
        d++;
        printf("\n");
    }
    
    //second half
    int e = 3;
    for(int c = 4; c >= 1; c--){
        for(int a = 5-c; a >= 1; a--){
            printf(" ");
        }
        for(int b = 1; b <= c+e; b++){
            printf("%d",b);
        }
        e--;
        printf("\n");
    }
  
  

    // ANOTHER WAY-->
    //first half
    for(int c = 1; c <= 5; c++){
        for(int a = 1; a <= 5-c; a++){
            printf(" ");
        }
        for(int b = 1; b < c*2; b++){
            printf("%d",b);
        }
        printf("\n");
    }
    
    //second half
    for(int c = 4; c >= 1; c--){
        for(int a = 5-c; a >= 1; a--){
            printf(" ");
        }
        for(int b = 1; b < c*2; b++){
            printf("%d",b);
        }
        printf("\n");
    }
  
  return 0;
}
