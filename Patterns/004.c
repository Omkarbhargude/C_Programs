//input : 4 A
//output : A A A A


#include<stdio.h>

void DisplayPattern(int iNo,char ch)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    char cValue = '\0';

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    printf("Accpeted character is : %c\n",cValue);

    DisplayPattern(iValue,cValue);

    return 0;
}