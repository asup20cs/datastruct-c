#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[100],pat[100],rep[100],ans[100];
    int i,j,m,c,k,flag=0;
    printf("Enter the main string: ");
    gets(str);
    printf("Enter the pattern string: ");
    gets(pat);
    printf("Enter the replace string: ");
    gets(rep);
    i=j=c=m=0;
    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            i++;
            m++;
            if(pat[i]=='\0')
            {
                for(k=0;rep[k]!='\0';k++,j++)
                {
                    ans[j] = rep[k];
                    flag = 1;
                }
                i=0;
                c=m;
            }
        }
        else
            {
                ans[j] = str[c];
                j++;
                c++;
                m=c;
                i=0;
            }
    }
    if(flag==0)
    {
        printf("Pattern doesn't found");
    }
    else
    {
        ans[j]='\0';
        printf("The resultant string is %s\n",ans);
    }
}