//I/P :- 3 4
/*O/P :- 
        4  3  2  1
        4  3  2  1
        4  3  2  1
       
*/

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
    int i = 0,j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >=1; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and Columns :\n");
    scanf("%d %d",&iValue1,&iValue2);

    DisplayPattern(iValue1,iValue2);

    return 0;
}