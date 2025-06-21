#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int CoutnCapital(char Fname[])
{
    int fd = 0, iRet = 0;
    int iCapCount = 0, iCnt = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd < 0)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File opended succesfully\n");

        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
                {
                    iCapCount++;
                }
            }

            memset(Buffer,'\0',BUFFER_SIZE);

        }

        close(fd);    
    }

    return iCapCount;

}
int main()
{
    int iRet = 0;
    char Fname[20] = {'\0'};

    printf("Enter file name : \n");
    scanf("%s",Fname);

    iRet = CoutnCapital(Fname);

    printf("Number of capital charactes in file are : %d\n",iRet);

    return 0;
}