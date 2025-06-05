#include<stdio.h>
#include<stdlib.h>  // for dynamic memory allocation

int main()
{
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    // Step 1 :- Allocate the memory
    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    
    //Step 2 :- Use that memory
    //use

    //Step 3 :- Free the memeory
    free(ptr);

    return 0;
}