#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
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