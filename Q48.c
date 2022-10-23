#include<stdio.h>

int main(){
  
/*
1
11
121
1331
14641
*/

    int multiplieBY11 = 1;
    for(int a = 1; a <= 5; a++){
        if(a == 1){
            printf("%d", multiplieBY11);
        }
        else{
            printf("%d", multiplieBY11 *= 11);
        }
        printf("\n");
    }
  
  return 0;
}
