#include<stdio.h>

int main(){
	
/*
1                                           1	           -> b (start or initialise)
21                                          2     	   -> b
321        ---> Explanation --> for(int a = 3; a >= 1; a--) 
4321                                        4              -> b
54321                                       5              -> b (end)
*/
    for(int b = 1; b <= 5; b++){
        for(int a = b; a >= 1; a--){
            printf("%d",a);
        }
        printf("\n");
    }
	
	return 0;
}
