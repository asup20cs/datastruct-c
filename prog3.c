#include<stdio.h> 
#include<stdlib.h>
#define MAX 5
int stack[MAX],top=-1;

void push();
int pop();
void palindrome();
void display();

void push(int ele)
{
    if(top==MAX-1)
    {
        printf("Stack is overflow");
        return;
    }
    else
    {
        top = top+1;
        stack[top] = ele;

    }
}

int pop()
{
    int ele;
    if(top == -1)
    {
        printf("Stack is underflow");
        return -1;
    }
    else{
        ele = stack[top];
        top=top-1;
    }
    return ele;
}

void display()
{
    int i;
    if(top==-1)
    {
    printf("Stack is underflow");
    // return -1;
    }
    else
    {
        printf("The elements are: ");
        for(i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
    
}

void palindrome()
{
    int flag=0,i,n,p[10];
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        push(p[i]);
    }
    for(i=0;i<n;i++)
    {
        if(p[i]!=pop())
        {
        flag =1;
        break;
        }
    }
    if(flag==0)
    {
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    
    
}

int main()
{
    int ch,ele;
    for(;;)
    {
        printf("\nMENU\n");
        printf("1.push\n2.pop\n3.display\n4.palindrome\n5.exit\n");
        printf("enter your choice: ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:printf("Enter the element to be pushed:");
            scanf("%d",&ele);
            push(ele);
            break;
            case 2:ele = pop();
            printf("The popped element = %d",ele);
            break;
            case 3:display();
            break;
            case 4:palindrome();
            break;
            case 5:exit(0);
            default:printf("Invalid option");
            break;
        }
    }
}