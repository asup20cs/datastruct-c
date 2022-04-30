#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int f[MAX]={1245,1233,1290,1255,1237,1258,1288,1200,1201,1204};
int HT[MAX]={0},l;
void probe(int,int);
void display();
void main()
{
    int i,num;
    for(i=0;i<MAX;i++)
    {
        l=f[i]%MAX;
        if(HT[l]==0)
            HT[l]=f[i];
        else
            probe(f[i]+1,f[i]);
    }
    display();
}

void probe(int k,int key)
{
    l=k%MAX;
    if(HT[l]==0)
        HT[l]=key;
    else
        probe(k+1,key);
}
void display()
{
    int i;
    printf("\nHASH TABLE:\n");
    for(i=0;i<MAX;i++)
        printf("\n%d\n",HT[i]);
}