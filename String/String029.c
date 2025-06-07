#include<stdio.h>

void CountCapitalSmall(char *str)
{
    int iCountCap = 0, iCountSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        else
        {
            iCountSmall++;
        }
        str++;
    }

    printf("Number of capital character are : %d\n",iCountCap);
    printf("Number of small character are : %d\n",iCountSmall);


}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter your name :\n");
    scanf("%[^'\n']s",Arr);

    CountCapitalSmall(Arr);


    return 0;
}