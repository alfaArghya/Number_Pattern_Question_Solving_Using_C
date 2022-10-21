#include<stdio.h>

int main(){
  
/*
1     --> start of first half
2*2
3*3*3
4*4*4*4
5*5*5*5*5
4*4*4*4 --> start of second half
3*3*3
2*2
1
*/
    int i=1, j=4;
  //first half 
    for(int b = 1; b <= 10; b+=2){
        for(int a = b; a >= 1; a--){
            if(a%2 == 1){ // it means --> if the position(a) is odd print the value of i
                printf("%d",i);
            }
            else if(a%2 == 0){  // it means --> if the position(a) is even print '*'
                printf("*");
            }
        }
        i++; //every time we need to increase the value upto 5
        printf("\n");
    }
  //second half
    for(int c = 7; c >= 1; c-=2){
        for(int a = 1; a <= c; a++){
            if(a%2 == 1){ // it means --> if the position(a) is odd print the value of j
                printf("%d",j);
            }
            else if(a%2 == 0){  // it means --> if the position(a) is even print '*'
                printf("*");
            }
        }
        j--; //every time we need to decrease the value upto 1
        printf("\n");
    }
  
  return 0;
}
