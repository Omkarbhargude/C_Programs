#include<stdio.h>

void DisplayName(char str[])
{
    printf("Your name is : %s\n",str);
}
int main()
{
    char Arr[50];

    printf("Enter your name :\n");
    scanf("%[^'\n']s",Arr);

    DisplayName(Arr);

    return 0;
}