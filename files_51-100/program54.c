#include<stdio.h>

void Display(int iNo1,int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n",iNo1);
    }

}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue1);

    printf("Enter frequency :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;

}