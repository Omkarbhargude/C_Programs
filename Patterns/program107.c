#include<stdio.h>

void DisplayPattern()
{
    int i = 0, j = 0;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    DisplayPattern();

    return 0;
}