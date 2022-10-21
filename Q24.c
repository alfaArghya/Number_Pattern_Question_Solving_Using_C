#include<stdio.h>

int main(){
  
/*
11111 
2222
333
22
1
*/
    int c=1;
    for(int b = 5; b >= 1; b--){
        for(int a = 1; a <= b; a++){
            
            if(b >= 3){
                printf("%d",c);
            }
            else{
                int d = 6-c;
                printf("%d",d);
            }

        }
        c++;
        printf("\n");
    }
  
  return 0;
}
