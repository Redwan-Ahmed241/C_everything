#include<stdio.h>
void main()
{
    char ch[100];
    gets(ch);
    int i,last;
    for(i=0;i<100;i++)
    {
        if(ch[i]=='\0')
        {
            last=i;
            break;
        }
    }
    for(i=last;i>=0;i--)
        printf("%c",ch[i]);
}
