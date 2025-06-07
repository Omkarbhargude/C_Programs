#include<stdio.h>

//case sensitive program 
int CharFrequency(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character :\n");
    scanf(" %c",&cValue);

    iRet = CharFrequency(Arr,cValue);

    printf("Number of %c in String are : %d\n",cValue,iRet);
    
    
    return 0;
}