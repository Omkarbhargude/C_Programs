#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if(ch > 65)
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

    bRet = CheckCapital(cValue);
    
    if(bRet == true)
    {
        printf("%c  is Capital\n",cValue);
    }
    else
    {
        printf("%c is not Capital\n",cValue);
    }
    return 0;

}