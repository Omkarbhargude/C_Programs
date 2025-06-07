#include<stdio.h>

void strtoggle(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;   
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }

}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter your name :\n");
    scanf("%[^'\n']s",Arr);

    strtoggle(Arr);

   printf("Updated String : %s\n",Arr);

    return 0;
}