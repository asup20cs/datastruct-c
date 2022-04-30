#include<stdio.h>
int toh(n,src,temp,dest)
{
    if(n>0)
    {
        toh(n-1,src,dest,temp);
        printf("Move disk %d from pos %d to pos %d\n");
        toh(n-1,temp,src,dest);
    }
}
int main()
{
    int n;
    printf("Enter the number of disk: ");
    scanf("%d",&n);
    toh(n,1,2,3);
}