//Input : 5
// Output :- A  B  C  D  E 

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt;
    char ch = '\0';

    for(iCnt = 1,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
    printf("\n");

}
int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}