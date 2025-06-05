#include<stdio.h>
#include<stdlib.h>  

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}
int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    int *iPtr = NULL;
    int iRet = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    iPtr = (int *)malloc(iLength * sizeof(int));
    if(iPtr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter the number %d :",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    printf("\nEnter the value that you want to search :\n");
    scanf("%d",&iValue);


    iRet = Frequency(iPtr,iLength,iValue);

    if(iRet == -1)
    {
        printf("Issue in input \n");
    }
    else
    {
        printf("%d appears %d time in array\n",iValue,iRet);
    }

    free(iPtr);

    return 0;
}