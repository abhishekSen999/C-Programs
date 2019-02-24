#include <fcntl.h>
#include "delay.h"


main()
{
    int fd;
    char buff[512]="";
    char* buf=buff;
    fd=open("input.txt",O_RDONLY);
    int i=0;
    
    while(read(fd,buf,1)!=0){
        delay(1);
        buf++;
    }
    printf("%s\n",buff);
}
