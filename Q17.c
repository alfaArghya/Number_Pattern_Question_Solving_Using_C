#include<stdio.h>

int main(){
  
/*
1
2 4
1 3 5
2 4 6 8
1 3 5 7 9
*/
    int c;
    for(int b = 1; b <= 5; b++){ //use this for 5 lines
        if(b%2 == 1){
            c = 1;
            }
        else if(b%2 == 0){
            c = 2;
        }
        for(int a = 1; a <= b; a++){
            printf("%d ",c);
            c+=2;
        }
    printf("\n");
    }
  
  return 0;
}

//Note --> for this question I have no excat explation how to do this, I think if u have basic knowladge of C u can do this.
