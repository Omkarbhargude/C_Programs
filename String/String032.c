#include<stdio.h>

int CountSpace(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter your name :\n");
    scanf("%[^'\n']s",Arr);

   iRet = CountSpace(Arr);

   printf("Number of whitespace in array are : %d\n",iRet);

    return 0;
}