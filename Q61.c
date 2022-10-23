#include<stdio.h>

int main(){
  
/*
1    2    3    4    5    6    7    8    9   10
36  37   38   39   40   41   42   43   44   11
35  64   65   66   67   68   69   70   45   12
34  63   84   85   86   87   88   71   46   13
33  62   83   96   97   98   89   72   47   14
32  61   82   95  100   99   90   73   48   15
31  60   81   94   93   92   91   74   49   16
30  59   80   79   78   77   76   75   50   17
29  58   57   56   55   54   53   52   51   18
28  27   26   25   24   23   22   21   20   19
*/


    int a[10][10], i, j;
    int low = 0, high = 9, n = 1;
    for(i=0; i<5; i++, low++, high--){
        for(j=low; j<=high; j++, n++)
            a[i][j] = n;
        for(j=low+1; j<=high; j++, n++)
            a[j][high] = n;
        for(j=high-1; j>=low; j--, n++)
            a[high][j] = n;
        for(j=high-1; j>low; j--, n++)
            a[j][low] = n;
    }
    printf("\t\tPerfect Square Spiral\n");
    for(i=0; i<10; i++){
        printf("\n");
        for(j=0; j<10; j++)
            printf("%4d", a[i][j]);
    }
    printf("\n");
  
  return 0;
}
