#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    // char buf[512]="hello how are you?";
    // char* ptr=buf;
    // while(*ptr != NULL)
    // {
    //     printf("%c\n",*ptr);
    //     ptr++;
    // }
    int fd;
    char buf[]="abcdefghijklmnopqrstuvwxyz0123456789";
    fd=open("input.txt",O_WRONLY);
    write(fd,buf,sizeof(buf));
}
