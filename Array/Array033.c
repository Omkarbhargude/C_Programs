#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a character :\n");
    scanf("%c",&cValue);

    bRet = CheckSmall(cValue);
    
    if(bRet == true)
    {
        printf("%c  is Small\n",cValue);
    }
    else
    {
        printf("%c is not Small\n",cValue);
    }
    return 0;

}