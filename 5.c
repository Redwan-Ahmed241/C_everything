#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a letter: \n");
    scanf(" %c",&ch);
    int num = (int)ch;
    if(num >=65 && num <= 90)
        printf("It is a upper case letter");
    else
        printf("It is a lower case letter");
}
