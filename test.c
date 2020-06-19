#include <stdio.h>
int main(){
    int a[]={0,0,0,0,0,0,0,0};
    int x=3;
    a[++x]=x++;
    for (int i=0;i < 8 ;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    } 
    
}
