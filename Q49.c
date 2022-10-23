#include<stdio.h>

int main(){
  
/*
12345                             1   + 2345
21234                             21   + 234
32123   --devide into 2 pieces--> 321   + 23
43212                             4321   + 2
54321                             54321
*/
    int c = 5;
    for(int b = 1; b <= 5; b++){
        for(int a = b; a >= 1; a--){
            printf("%d", a);
        }
        for(int a = 2; a <= c; a++){
            printf("%d",a);
        }
        c--;
        printf("\n");
    }
  
  return 0;
}
