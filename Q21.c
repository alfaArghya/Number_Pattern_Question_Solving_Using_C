#include<stdio.h>

int main(){
  
/*
1                                              1     -> b (start or initialize)
123                                            3
12345         --explain--> for(int a = 1; a <= 5; a++)
1234567                                        7
123456789                                      9     -> b (end)
                here we are doing b = b + 2, for that reason we got 1, 3, 5, 7, 9.
*/
    for(int b = 1; b <= 9; b += 2){
        for(int a = 1; a <= b; a++){
            printf("%d",a);
        }
        printf("\n");
    }
  
  return 0;
}
