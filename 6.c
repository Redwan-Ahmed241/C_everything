#include<stdio.h>
void main()
{
    char ch1[100],ch2[100],ch3[100];
    printf("Enter the first string: \n");
    gets(ch1);
    printf("Enter the second string: \n");
    gets(ch2);
    int i;
    for(i=0;i<100;i++)
    {
        ch3[i]=ch1[i];
        ch1[i]=ch2[i];
        ch2[i]=ch3[i];
    }
    printf("Reversed first string: \n");
    for(i=0;i<100;i++)
    {
        if(ch1[i]=='\0')
            break;
        printf("%c",ch1[i]);
    }
    printf("\n");
    printf("Reversed second string: \n");
    for(i=0;i<100;i++)
    {
        if(ch2[i]=='\0')
            break;
        printf("%c",ch2[i]);
    }


}
