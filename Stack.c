#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct Head
{
    int count;
    struct Node *top;
}*head;

struct Node
{
    int data;
    struct Node *next;
}*temp;

void Create_Stack()
{
    head=(struct Head*)malloc(sizeof(struct Head));
    head->top=NULL;
    head->count=0;
}

void Push()
{
    int a;
    printf("Enter the data you want to push in stack : \n");
    scanf("%d",&a);
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=a;
    if(head->count==0)
    {
        temp->next=NULL;
        head->top=temp;
    }
    else
    {
        temp->next=head->top;
        head->top=temp;
    }
    (head->count)++;
}

void Pop()
{
    if(head->count==0)
    {
        printf("Stack Is Empty .\n\nPop operation is not possible .\n\n");
    }
    else
    {
      head->top=head->top->next;
    }
   (head->count)--;
}

void Traverse()
{
    if(head->count==0)
    {
        printf("Stack Is Empty .\n\n");
    }
    else
    {
        for(temp=head->top;temp!=NULL;temp=temp->next)
        {
            printf("%d ",temp->data);
        }
        printf("\n\n");
    }
}

void Search()
{
    int a,cnt=0,cnt1=0;
    printf("Enter the data you want to Search : \n");
    scanf("%d",&a);
    if(head->count==0)
    {
        printf("Stack Is Empty .\n\nSearch operation is not possible .\n\n");
    }
    else
    {
        for(temp=head->top;temp!=NULL;temp=temp->next)
        {
            cnt++;
            if(temp->data==a)
            {
                cnt1++;
                printf("Data is Found .\nData Position is : %d\n\n",cnt);
                break;
            }
        }
        if(cnt1==0)
        {
            printf("Data is Not Found \n\n");
        }
    }
}

void Destroy()
{
    temp=head->top;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    system("CLS");
    printf("Stack is Destroyed .\n\n\n");
    head->count=0;
}

void IsEmpty()
{
    if(head->count==0)
    {
        printf("Stack is Empty .\n");
    }
    else
    {
        printf("Stack is Not Empty .\n");
    }
}

void Top_Stack()
{
    if(head->count==0)
    {
        printf("Stack is Empty .\n");
    }
    else
    {
        printf("Top Stack is : %d\n",head->top->data);
    }
}

void Menu()
{
    int a;
    while(1)
    {
     printf("Enter 1 for Push in Stack . \n");
     printf("Enter 2 for Pop from Stack . \n");
     printf("Enter 3 for Search in Stack .\n");
     printf("Enter 4 for Destroy Stack .\n");
     printf("Enter 5 for Check Is the Stack is Empty \n");
     printf("Enter 6 for Top Stack .\n");
     printf("Enter 7 for Display Stack .\n");
     printf("Enter 8 for Exit  .\n");

     scanf("%d",&a);

     switch(a)
     {
     case 1:
        Push();
        Traverse();
        break;
     case 2:
        Pop();
        Traverse();
        break;
     case 3:
        Search();
        break;
     case 4:
        Destroy();
        break;
     case 5:
        IsEmpty();
        break;
     case 6:
        Top_Stack();
        break;
     case 7:
        Traverse();
        break;
     case 8:
        exit(0);
     default:
        system("CLS");
        printf("Enter According to option is given .\n\n");
     }
   }
}

int main()
{
    Create_Stack();
    Menu();

    return 0;
}
