//I/P :- 4 4
/*O/P :- 
        A  A  A  A  A
        B  B  B  B  B
        C  C  C  C  C       
*/

#include<stdio.h>

void DisplayPattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iRow; i++,ch++)
    {
        for(j = 1; j <=iCol; j++)
        {
            printf("%c\t",ch);
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