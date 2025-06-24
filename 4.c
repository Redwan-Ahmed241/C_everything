#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character: \n");
    scanf(" %c",&ch);
    int num;
    num = (int) ch;
    if((num>=48 && num<=57) || (num>=65 && num<=70) || (num>=97 && num<=102))
		printf( "The entered character is a hexadecimal digit. \n" );
	else
		printf( "The entered character is not a hexadecimal digit. \n" );
}
