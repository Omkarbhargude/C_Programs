#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        printf("%c\n",*str);
        iCount++;
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[50];
    int iRet  = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("Number of Characters are : %d\n",iRet);

    return 0;
}