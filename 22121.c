#include<stdio.h>
void main(){
int size,i,n=20,count=0;
char array[n];
printf("Size of array:%d\n",n);
printf("Please enter the string of character: ");
scanf("%s",array);
for(i=0;array[i]!='\0';i++)
{
  if(array[i]=='A'||array[i]=='E'||array[i]=='I'||array[i]=='O'||array[i]=='U'||array[i]=='a'||array[i]=='e'||array [i]=='i'||array[i]=='o'||array[i]=='u')
        count++;

}
printf("No. of vowels = %d",count);
}
