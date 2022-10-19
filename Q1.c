#include<stdio.h>

int main(){
 /*
12345
1234
123
12
1
*/
  
    for(int b = 5; b >= 1; b--){
        for(int a = 1; a <= b; a++){
            printf("%d",a);
        }
        printf("\n");
    }
  
  return 0;
}
