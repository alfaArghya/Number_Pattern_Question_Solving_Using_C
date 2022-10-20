#include<stdio.h>

int main(){
  
/*
1234567                                           7     -> b (start or initialise)
12345             explain --> for(int a = 1; a <= 5; a++)
123                                               3     -> b
1                                                 1     -> b (end)
                ** after every line we do b = b - 2, for that we get 7, 5, 3, 1.
*/
    for(int b = 7; b >= 1; b = b - 2){
        for(int a = 1; a <= b; a++){
            printf("%d",a);
        }
        printf("\n");
    }
  
  return 0;
}
