#include<stdio.h>

/*
6
0,5,18,39,68,105,sum = 235

*/

int main(){

    int n;
    scanf("%d",&n);

    int diff = 5;
    int printValue = 0;
    int sum = 0;

    for(int i=0; i<n;i++){
        printf("%d,", printValue);//0 5 18 39 68 105
        sum+=printValue;
        printValue = printValue+diff;//5 18 39 68 105 150
        diff+=8;//13 21 29 37 45 53
    }
    printf("sum =%d", sum);

    return 0;
}