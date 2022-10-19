#include<stdio.h>

int main(){
  
5
44
333
2222
11111
*/
    for(int b = 5; b >= 1; b--){
        for(int a = 1; a <= 6-b; a++){
            printf("%d",b);
        }
        printf("\n");
    }
  
  //another way -->
    for(int b = 5; b >= 1; b--){
        for(int a = b; a <= 5; a++){
            printf("%d",b);
        }
        printf("\n");
    }
  
  return 0;
}
