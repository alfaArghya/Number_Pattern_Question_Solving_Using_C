#include<stdio.h>

int main(){
  
/*
    1                                                              1   -->  b (start or initialize)   <-- 1      
  2 3 4     --we need to make 2 loops--> (l1)for(int b = 1; b <= 3-2; b++)    &   (l2) for(int a = 1; a < 2 * 2; a++)
5 6 7 8 9                                                          3   -->            b (end)          <-- 3

*/
    int e = 1;
    for(int c=1; c <= 3;c++){
        for(int b = 1; b<= 3-c; b++){
            printf("  ");
        }
        for(int a = 1; a<c*2;a++){
            printf("%d ",e++);
        }
        printf("\n");
    }
  
  return 0;
}
