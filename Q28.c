#include<stdio.h>

int main(){

/*
1        1                                1  (start or initialize) b <- 1         + ********  +       1                   1 -> b (start or initialize)
12      21                                12                       b <- 2         +  ******   +      21                   2 -> b
123    321    --devided into 3 pieces --> 123   --> for(int a = 1; a <= 3; a++)   +   ****    +     321   --> for(int c = 3; c >= 1; c++) 
1234  4321                                1234                     b <- 4         +    **     +    4321                   4 -> b
1234554321                                12345              (End) b <- 5         +           +   54321                   5 -> b (End)
*/
    for(int d = 1; d <= 5; d++){
        for(int a = 1; a <= d; a++){
                printf("%d",a);
        }
        for(int b = (5-d) * 2; b >= 1; b--){ //loop for '*'
            printf(" ");
        }
        for(int c = d; c >= 1; c--){
            printf("%d",c);
        }
        printf("\n");
    }
  
  return 0;
}

//Note --> we can also devided it into 4 pieces......try it by yourself and massage me on linkdin or insta
