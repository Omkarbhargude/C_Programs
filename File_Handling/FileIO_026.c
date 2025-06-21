#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the file you want to open : \n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);

    //first 3 parameter from 0 to 2 are preserved 
    if(fd < 0)
    {
        printf("Unbale to open file\n");
        return -1;
    }
    else
    {
        printf("File succesfully opened at FD : %d\n",fd);
    }

    close(fd);

    return 0;
}