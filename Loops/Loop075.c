//input : 4
//output : 1 2 3 4

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}