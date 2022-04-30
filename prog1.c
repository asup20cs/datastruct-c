#include<stdio.h>
#include<stdlib.h>
int a[20],i,n;

void create();
void display();
void delete();
void insert();

int main()
{
    int ch;
    for(;;)
    {
        printf("\nMENU\n");
        printf("1.create\n2.display\n3.delete\n4.insert\n5.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:create();
                break;
            case 2:display();
                break;
            case 3:delete();
                break;
            case 4:insert();
                break;
            case 5:exit(0);
            default:printf("Invalid option");
                break;
        }
    }
}

void create()
{
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void insert()
{
    int pos,val,i;
    printf("Enter the new position: ");
    scanf("%d",&pos);
    printf("Enter the element to be insert: ");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1] = a[i];
    }
    a[pos] = val;
    n = n+1;
}

void delete()
{
    int pos,val,i;
    printf("Enter the position to be deleted: ");
    scanf("%d",&pos);
    val = a[pos];
    for(i=pos;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    n = n-1;
    printf("The deleted elements =%d",val);
}

void display() 
{ 
    int i;
    printf("The array elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
} 
