//Input : omkar
//output : omkAr

#include<stdio.h>

void Change(char *str)
{

    while(*str != '\0')
    {
        if(*str == 'a')
        {
            *str = 'A';
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