#include<stdio.h>

void DisplayPattern()
{
    int j = 0;

    for(j = 1; j <= 4; j++)
    {
        printf("*\t");
    }
    printf("\n");

    for(j = 1; j <= 4; j++)
    {
        printf("*\t");
    }
    printf("\n");

    for(j = 1; j <= 4; j++)
    {
        printf("*\t");
    }
    printf("\n");

}
int main()
{
    DisplayPattern();

    return 0;
}