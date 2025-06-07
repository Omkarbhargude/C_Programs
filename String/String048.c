#include<stdio.h>

//case insensitive 
int CharFrequency(char *str, char ch)
{
    int iCount = 0;
    int iDisplacement  = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        iDisplacement = 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        iDisplacement = -32;
    }
    else
    {
        iDisplacement = 0;
    }

    while(*str != '\0')
    {
        if((*str == ch) || (*str == ch + iDisplacement)) //ch + - 32 is -32 bcuz (+- is -) 
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

    printf("%c occurs %d times \n",cValue,iRet);
    
    
    return 0;
}