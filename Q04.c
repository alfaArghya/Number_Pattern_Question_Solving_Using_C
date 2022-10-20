#include<stdio.h>

int main(){
	
/*
54321                                               1     -> b (start or initialise)
5432                                                2     -> b
543        ---> Explanation --> for(int a = 5; a >= 3; a--) 
54                                                  4     -> b
5                                                   5     -> b (end)
*/
    for(int b = 1; b <= 5; b++){
        for(int a = 5; a >= b; a--){
            printf("%d",a);
        }
        printf("\n");
    }
	
	return 0;
}
