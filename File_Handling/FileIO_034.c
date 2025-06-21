#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024
int CountChar(char Fname[], char cValue)
{
    int fd = 0, iRet = 0;
    int iCount = 0, iCnt = 0;
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
                if(Buffer[iCnt] == cValue)
                {
                    iCount++;
                }
            }

            memset(Buffer,'\0',BUFFER_SIZE);

        }

        close(fd);    
    }

    return iCount;

}
int main()
{
    int iRet = 0;
    char Fname[20] = {'\0'};
    char cValue = '\0';

    printf("Enter file name : \n");
    scanf("%s",Fname);

    printf("Enter a character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(Fname,cValue);

    printf("Number of %c in file are : %d\n",cValue,iRet);

    return 0;
}