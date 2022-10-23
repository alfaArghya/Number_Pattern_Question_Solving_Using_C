#include<stdio.h>

int main(){
  
/*
1
212
32123
4321234
543212345
*/

    printf("%d\n",1);
    for( int c = 2; c <= 5; c++){
        for(int a = c; a >= 2; a--){
            printf("%d", a);
        }
        printf("%d",1); //print 1 in every line
        for(int b = 2; b <= c; b++){
            printf("%d",b);
        }
        printf("\n");
    }
  
  return 0;
}
