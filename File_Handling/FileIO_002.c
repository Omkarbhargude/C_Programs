#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};   //Array of characters

    printf("Enter the name of file : \n");  
    scanf("%s",Fname);            // Creating file on runtime

    fd = creat(Fname,0777);

    return 0;
}