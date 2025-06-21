#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

//printf internally calls write system call 
//1 is for monitor by which we can display our string on monitor
int main()
{
    write(1,"Jay Ganesh...",13);

    
    return 0;
}