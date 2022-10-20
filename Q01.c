#include<stdio.h>

int main(){
 /*
12345                                               5     -> b (start or initialise)
1234                                                4     -> b
123        ---> Explanation --> for(int a = 1; a <= 3; a++) 
12                                                  2     -> b
1                                                   1     -> b (end)
*/
  
    for(int b = 5; b >= 1; b--){
        for(int a = 1; a <= b; a++){
            printf("%d",a);
        }
        printf("\n");
    }
  
  return 0;
}
