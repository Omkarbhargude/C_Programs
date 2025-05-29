#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0, iTable = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iTable = iCnt * iNo;
        printf("%d\n",iTable);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    TableRev(iValue);
   
    return 0;
}