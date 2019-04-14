#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int call(int* add)
{
    int pid=fork();
    if(pid==0){
        *add=-1* *add;
    }
    else{
        *add=-1* *add;
    }
    return getpid();

}

int main()
{
    int i=0;
    int arr[5]={1,2,3,4,5};
    int a=6;
    int pid=call(&a);
    printf("pid= %d\n",pid);
    
    printf("%d ",a);
   
    printf("\n");
    
}