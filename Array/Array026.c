#include<stdio.h>
#include<stdlib.h>  

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if( Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iLength = 0, iCnt = 0;
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

    iRet = Minimum(iPtr,iLength);

    printf("Minimum element in array is : %d\n",iRet);

    free(iPtr);

    return 0;
}