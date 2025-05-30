#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iSum = 2;

    if(iNo <= 0)
    {
        return;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iSum);
        iSum = iSum + 2;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}