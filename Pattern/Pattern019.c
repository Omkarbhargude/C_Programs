//input : 4 4
/* Output : 
           a a a a
           B B B B
           c c c c
           D D D D
           
*/
#include<stdio.h>

void DisplayPattern(int iRows, int iCol)
{
    int i = 0;
    int j = 0;
    char ch1 = '\0', ch2 = '\0';

    for(i = 1, ch1 = 'a', ch2 = 'A'; i <= iRows; i++,ch1++,ch2++) // change in parameter
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) != 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch2);
            }
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