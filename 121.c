#include<stdio.h>
void main(){
int num;
int sum =0,i=10,j=5;
scanf("%d",&num);
switch(num){
case 1:
    sum=2*i++;
    j++;
case 2:
    sum=2*j--;
    i++;
    break;
case 3:
    sum=++i*j--;
case 4:
    sum=i++*j--;
default:
    sum=0;
    i=0;
    j=0;

}
printf("%d %d %d",i,j,sum);



}
