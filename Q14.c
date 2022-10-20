#include<stdio.h>

int main(){
  
/*
                               (I)           (II)   
1                               1             5
01                              21            45
101  --we can write this way--> 321   --Or--> 345   --> we use explanation of Q07 & Q08. 
0101                            4321          2345
10101                           54321         12345

(I) --Explain--> now here we use % to identify odd and even number, if number is even a%2 print 0(that means false) and if number is odd a%2 print 1(that means true).
(II) --Explain--> now here we use % to identify odd and even number, if number is even a%2 print 0(that means false) and if number is odd a%2 print 1(that means true).
*/
  
  //using (I) method ->
    for(int b = 1; b <= 5; b++){
        for(int a = b; a >= 1; a-- ){
            printf("%d",a%2);
        }
        printf("\n");
    }

 // using (II) method ->
    for(int b = 5; b >= 1; b--){
        for(int a = b; a <= 5; a++ ){
            printf("%d",a%2);
        }
        printf("\n");
    }
  
  return 0;
}
