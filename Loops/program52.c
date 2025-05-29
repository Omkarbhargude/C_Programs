#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 1;
    while(iNo >= iCnt)
    {
        printf("*\n");
        iCnt++;
    } 

}
int main()
{
    int iValue = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}