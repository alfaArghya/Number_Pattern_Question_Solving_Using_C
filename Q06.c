#include<stdio.h>

int main(){
	
/*
5                                           5             -> b (start or initialise)
45                                          4             -> b
345        ---> Explanation --> for(int a = 3; a <= 5; a++) 
2345                                        2             -> b
12345                                       1             -> b (end)
*/
    for(int b = 5; b >= 1; b--){
        for(int a = b; a <= 5; a++){
            printf("%d",a);
        }
        printf("\n");
    }
	
	return 0;
}
