#include<stdio.h>

int main(){
	
/*
55555						5     -> b(start or initialise)
4444					        4     -> b
333		explain --> for(int a = 1; a <= 3; a++)
22				         	2     -> b
1						1     -> b (end)
	**here we are printing b that way every line is same.
*/
    for(int b = 5; b >= 1; b--){
        for(int a = 1; a <= b; a++){
            printf("%d",b);
        }
        printf("\n");
    }
	
	return 0;
}
