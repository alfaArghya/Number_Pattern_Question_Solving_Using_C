#include<stdio.h>
int main(){

/*
12345                                       1              -> b (start or initialise)
2345                                        2              -> b
345        ---> Explanation --> for(int a = 3; a <= 5; a++)
45                                          4             -> b
5                                           5             -> b (end)
*/
    for(int b = 1; b<= 5; b++){
        for(int a = b; a <= 5; a++){
            printf("%d",a);
        }
        printf("\n");
    }
	
	return 0;
}
