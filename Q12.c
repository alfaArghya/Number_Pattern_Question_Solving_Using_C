#include<stdio.h>

int main(){
	
/*
11111																						1			-> b
2222																						2			-> b
333						explain --> for(int a = 1; a <= 6-3; a++)
44																							4			-> b
5																								5			-> b
							here we are printing b, that's way every line have same number.
*/
    for(int b = 1; b <= 5; b++){
        for(int a = 1; a <= 6-b ; a++){
            printf("%d",b);
        }
        printf("\n");
    }
	
	//another way -->
    for(int b = 1; b <= 5; b++){
        for(int a = b; a <= 5 ; a++){
            printf("%d",b);
        }
        printf("\n");
    }
	
	return 0;
}
