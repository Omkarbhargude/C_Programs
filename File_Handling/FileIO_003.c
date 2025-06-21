#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of file : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd < 0)   // fd is file discriptor 
    {
        printf("File not created\n"); 
    }
    else
    {
        printf("File created\n");
    }

    return 0;
}