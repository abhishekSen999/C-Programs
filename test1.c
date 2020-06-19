#include <stdio.h>

int main()
{
    int a[6]={34,56,75,22,89,94};
    int x=3;
    a[++x]=x++;
    printf("%d",a[5]);

    return 0;
}