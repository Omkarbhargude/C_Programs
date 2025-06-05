#include<stdio.h>
#include<stdlib.h>  

void Display(int Arr[],int iSize)
{
    int iCnt = 0;
    printf("Elements of array are :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}
int main()
{
    int iLength = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    // Step 1 :- Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    //Step 2 :- Use that memory
    //use

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);

    //Step 3 :- Free the memeory
    free(ptr);

    return 0;
}