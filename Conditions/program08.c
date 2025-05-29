#include<stdio.h>
#define ERR_INVALID_AGE -1

int DisplayTicket(int iAge)
{
    if(iAge < 0)
    {
        return ERR_INVALID_AGE;
    }

    if((iAge >= 0) && (iAge <= 5))
    {
        return 0;
    }
    else if((iAge >= 6) && (iAge <= 18))
    {
        return 700;
    }
    else if((iAge >= 19) && (iAge <= 50))
    {
        return 999;
    }
    else if(iAge > 50) 
    {
        return 500;
    }
}
int main()
{
    int Age = 0, iRet = 0;

    printf("Enter the age :\n");
    scanf("%d",&Age);

    iRet = DisplayTicket(Age);


    if(iRet == ERR_INVALID_AGE)
    {
        printf("---Unable to calculate your ticket---\n");
    }
    else
    {
       printf("---Price of Your Ticket is : %d$ ---\n",iRet);
    }

    return 0;
}