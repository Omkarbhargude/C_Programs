//Input : InDiA
//output : I$D$A

#include<stdio.h>

void Change(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = '$';
        }
        str++;
    }

}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter your name :\n");
    scanf("%[^'\n']s",Arr);

    Change(Arr);

   printf("Updated String : %s\n",Arr);

    return 0;
}