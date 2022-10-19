#include<stdio.h>

int main(){
	
/*
1                                                   1     -> b (start or initialise)
12                                                  2     -> b
123        ---> Explanation --> for(int a = 1; a <= 3; a++)
1234                                                4     -> b
12345                                               5     -> b (end)
*/
    for(int b = 1;b <= 5; b++){
        for(int a = 1; a <= b; a++){
            printf("%d",a);
        }
        printf("\n");
    }
	
	return 0;
}
