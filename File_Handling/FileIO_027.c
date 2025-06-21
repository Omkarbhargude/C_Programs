#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter file name you want to create : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd < 0)
    {
        printf("Unable to create file\n");
        return -1;
    }
    else
    {
        printf("File created succesfully at FD : %d\n",fd);
    }

    close(fd);

    return 0;
}