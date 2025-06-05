#include<stdio.h>
#include<stdlib.h>  
#include<stdbool.h>

bool Search(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( Arr[iCnt] == 11)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int iLength = 0, iCnt = 0;
    bool bRet = false;
    int *ptr = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Search(ptr,iLength);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(ptr);

    return 0;
}