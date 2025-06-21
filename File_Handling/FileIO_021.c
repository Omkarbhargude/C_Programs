#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

//Buffer of OS internally is 1kB
int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'}; 
    char Buffer[1024] = {'\0'};

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

        while((iRet = read(fd,Buffer,1024)) != 0)  //iRet should not be equal to 0
        {
            write(1,Buffer,iRet);

            memset(Buffer,'\0',1024);
        }
        
        close(fd);
    }

    return 0;
}