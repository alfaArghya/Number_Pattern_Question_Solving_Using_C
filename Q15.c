#include<stdio.h>

int main(){
  
/*
1                                1
10                               12
101   --we can write this way--> 123    --we are using explanation of Q05.
1010                             1234
10101                            12345
--Explain--> now here we use % to identify odd and even number, if number is even a%2 print 0(that means false) and if number is odd a%2 print 1(that means true).

*/
    for(int b = 1; b <= 5; b++){
        for(int a = 1; a <= b; a++){
            printf("%d",a%2);
        }
        printf("\n");
    }
  
  return 0;
}

//**Note --> there are another way to do this, find that by yourself. If u able to do that please massage me on linkedin or insta.
