#include<stdio.h>

//case insensitive 
int CharFrequency(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((ch >= 'A') && (ch <= 'Z'))  // to check the character is capital or not 
        {
            if((*str == ch) || (*str == ch + 32)) // if (a == A) || (a == A + 32) (a == 65 + 32) ascii value of small a is 97
            {
                iCount++;
            }
        }
        else if((ch >= 'a') && (ch <= 'z'))  // to check the character is small or not 
        {
            if((*str == ch) || (*str == ch - 32))
            {
                iCount++;
            }
        }
        else
        {
            if((*str == ch) || (*str == ch + 0))
            {
                iCount++;
            }
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