#include<stdio.h>

void strlwrX(char *str)
{

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;    //or *str = *str + ('a' - 'A')
        }
        str++;
    }

}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter your name :\n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

   printf("Updated String : %s\n",Arr);

    return 0;
}