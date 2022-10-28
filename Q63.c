 #include<stdio.h>

int main(){
  
/*
    5
   54
  543
 5432
54321
*/

    for(int c = 5; c >= 1; c--){
        for(int b = 1; b <= c - 1; b++){
            printf(" ");
        }
        for(int a = 5; a >= c; a--){
            printf("%d",a);
        }
        printf("\n");
    }
  
  return 0;
}
