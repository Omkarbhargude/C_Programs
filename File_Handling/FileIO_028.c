#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int main()
{
    int fd = 0;
    int iRet = 0;
    char Fname[20] = {'\0'};
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter file name that you want to read :\n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);

    if(fd < 0)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File opened succesfully\n");

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            write(1,Buffer,iRet);

            memset(Buffer,'\0',BUFFER_SIZE);
        }

        close(fd);
    }

    return 0;

}