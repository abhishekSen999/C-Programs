#include <fcntl.h>
#include<stdio.h>
#include"delay.h"

main()
{
    int fd;
    char buff[512]=".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-";
    char* buf=buff;
    fd=open("input.txt",O_WRONLY);
    while(*buf != NULL)
    {
        write(fd,buf,1);
        delay(1);
        buf++;
    }
}

