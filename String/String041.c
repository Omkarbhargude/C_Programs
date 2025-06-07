#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character :\n");
    scanf(" %c",&cValue);           //Problem solved by giving space before %c

    return 0;
}