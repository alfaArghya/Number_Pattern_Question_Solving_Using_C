    #include<stdio.h>

int main(){

/*
0
1 2 
2 3 4
3 4 5 6   --explain--> do same things as Q32
4 5 6 7 8
5 6 7 8 9 10
*/
    for(int b = 0; b <= 5; b++){
        for(int a = 0; a <= b; a++){
            printf("%d ", a+b);
        }
        printf("\n");
    }
  
  return 0;
}
