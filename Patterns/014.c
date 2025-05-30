//input : 4 4
/* Output :
           A B C D
           E F G H
           I J K L
           M N O P
*/
#include<stdio.h>

void DisplayPattern(int iRows, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'A';

    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iCol; j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Rows :\n");
    scanf("%d",&iValue1);

    printf("Enter Columns :\n");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1,iValue2);

    return 0;
}