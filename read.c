#include <fcntl.h>
void main()
{
    int fd;
    char libbuff[20], bigbuff[1024];
    fd = open("input.txt", O_RDONLY);
    printf("1- %d  %s\n", read(fd, libbuff, 20), libbuff);
    printf("2- %d\n", read(fd, bigbuff, 1024)), bigbuff;
    printf("3-%d\n", read(fd, libbuff, 20));
    printf("fd : %d",fd);
}