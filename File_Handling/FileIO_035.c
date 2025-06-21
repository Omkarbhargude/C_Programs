#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
void Display(char Fname[], int iNo)
{
    int fd = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd < 0)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File opended succesfully\n");

        iRet = read(fd,Buffer,iNo);

        printf("%s",Buffer);


        close(fd);    
    }

}
int main()
{
    int iValue = 0;
    char Fname[20] = {'\0'};

    printf("Enter file name : \n");
    scanf("%s",Fname);

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Display(Fname,iValue);

    return 0;
}