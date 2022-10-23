#include<stdio.h>

int main(){

/*
1
2 3
3 4 5     --explain--> same as Q31...... write here all equation as Q31(example - 1 = a + b)
4 5 6 7
5 6 7 8 9
*/
    for( int b = 1; b <= 5; b++){
        for(int a = 0; a < b; a++){
            printf("%d ", a+b); //it is printing 1 to 9
        }
        printf("\n");
    }

return 0;
}
