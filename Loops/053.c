#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
   
    for(iCnt = -iNo; iCnt <= iNo; iCnt--)
    {
        if(iNo < 0)
        {
            printf("$\t");
        }
        else if(iNo > 0)
        {
            printf("*\t");
        }
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter the value :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}