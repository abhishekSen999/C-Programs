#include <fcntl.h>
#include<stdio.h>
#include<time.h>

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Stroing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not acheived 
    while (clock() < start_time + milli_seconds) 
        ; 
} 

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

//