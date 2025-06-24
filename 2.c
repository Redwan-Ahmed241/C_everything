#include<stdio.h>
void main()
{
    char ch[100];
    gets(ch);
    int i,last,count=0;
    for(i=0;i<100;i++)
    {
        if(ch[i]=='\0')
            break;
        if(ch[i]!=' ')
        {
            count++;
        }
    }
    printf("Total number of words %d",count);
}

