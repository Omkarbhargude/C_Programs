#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    int fd = 0, iRet = 0;
    char Fname[20] = {'\0'}; 
    char Buffer[] = "India is my country";


    printf("Enter the file name that you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname, O_CREAT | O_WRONLY | O_APPEND); 

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is succesfully opened with FD : %d\n",fd);

        iRet = write(fd,Buffer,strlen(Buffer));

        printf("%d bytes gets written succesfully\n",iRet);

        close(fd);
    }

    return 0;
}