#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0, iRet = 0, iCnt = 0;
    char Fname[20] = {'\0'}; 
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY ); 

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened with FD : %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)  //iRet should not be equal to 0
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                printf("%c\n",Buffer[iCnt]);
            }
           memset(Buffer,'\0',BUFFER_SIZE); 

        }

        close(fd);
    }

    return 0;
}