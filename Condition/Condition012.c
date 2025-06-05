#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("--SMALL--\n");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("--MEDIUM--\n");
    }
    else if(iNo > 100)
    {
        printf("--LARGE--\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the value :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}