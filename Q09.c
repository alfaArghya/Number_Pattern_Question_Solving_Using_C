#include<stdio.h>

int main(){
  
 /*
1
22
333
4444
55555
*/
    for(int b = 1; b <= 5; b++ ){
        for(int a = 1; a <= b; a++){  //another way --> for(int a = 0; a < b; a++)
            printf("%d",b);
        }
        printf("\n");
    }
  
  return 0;
}
