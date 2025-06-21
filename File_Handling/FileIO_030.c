#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int main()
{
    int fd = 0;
    int iRet = 0, iSum = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};
    char Arr[BUFFER_SIZE] = {'\0'};

    printf("Enter file name that you want to read :\n");
    scanf("%s",Fname);

    printf("Enter the string : \n");
    scanf(" %s",Arr);

    fd = open(Fname, O_WRONLY | O_APPEND);

    if(fd < 0)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File opened succesfully\n");

        iRet = write(fd,Arr,strlen(Arr));

        printf("%d bytes gets written in file\n",iRet);


        close(fd);
    }

    return 0;

}