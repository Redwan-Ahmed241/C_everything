#include<stdio.h>
void main()
{
    char ch1[100],ch2[100],ch[200];
    printf("Enter the first string: ");
    gets(ch1);
    printf("\nEnter the second string: ");
    gets(ch2);
    int i,j,last,a;
    for(i=0;i<100;i++)
    {
        if(ch1[i]=='\0')
            break;
        ch[i]=ch1[i];
    }
    ch[i]=' ';
    int count=0;
    for(j=i+1;j<100;j++)
    {
        ch[j]=ch2[count];
        count++;
        if(ch2[count]=='\0')
            break;
    }

    for(i=0;i<200;i++)
    {
        if(ch[i]=='\0')
            break;
        printf("%c",ch[i]);
    }

}


