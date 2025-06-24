#include<stdio.h>
int sum(int n);
void main( ){

int num;
scanf("%d",&num);

    printf("%d",sum(num));
}

int sum(int n){

 if(n!=0)

    return n+sum(n-1);

 else
    return n;

}
