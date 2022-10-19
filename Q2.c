#include<stdio.h>
int main(){

/*
12345
2345
345
45
5
*/
    for(int b = 1; b<= 5; b++){
        for(int a = b; a <= 5; a++){
            printf("%d",a);
        }
        printf("\n");
    }
	
	return 0;
}
