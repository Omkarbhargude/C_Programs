#include<stdio.h>

int MultDigit(int iNo)
{
    int iMult = 1;
    int iDigit = 0;

    while(iNo != 0 )
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("Multiplication of given digit is :%d\n",iRet);
    return 0;
}