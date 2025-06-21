#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Demo.txt",0777); //Statically creating file using creat system call

    return 0;
}