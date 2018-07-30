#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

struct Node
{
    int data;
    struct Node *next;
}*temp,*temp2;

struct Head
{
    int count;
    struct Node *Start;
    struct Node *End;
}*head;

void ListCreate()
{
    head=(struct Head*)malloc(sizeof(struct Head));
    head->Start=NULL;
    head->End=NULL;
    head->count=0;
}

void Insert_1st()
{
    int a;
    printf("Enter the data you want to Insert . \n");
    scanf("%d",&a);
    if(head->count==0)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=a;
        temp->next=NULL;

        head->Start=temp;
        head->End=temp;
    }
    else
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=a;
        temp->next=head->Start;
        head->Start=temp;
    }
    (head->count)++;
}

void Insert_Middle()
{
    int a,b;
    printf("Enter after which you want to Insert the data : \n");
    scanf("%d",&b);
    printf("Enter the data you want to Insert . \n");
    scanf("%d",&a);
    if(head->count==0)
    {
        printf("List is Empty '\n");
    }
    else
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp2=(struct Node*)malloc(sizeof(struct Node));

        temp2->data=a;

        for(temp=head->Start; temp!=NULL; temp=temp->next)
        {
            if(temp->data==b)
            {
                temp2->next=temp->next;
                temp->next=temp2;

                (head->count)++;
            }
        }
    }
}

void Insert_last()
{
    int a;
    printf("Enter the data you want to Insert . \n");
    scanf("%d",&a);
    if(head->count==0)
    {
        printf("List is Empty .\n");
    }
    else
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=a;
        temp->next=NULL;

        head->End->next=temp;
        head->End=temp;

        (head->count)++;
    }
}

void Delete_1st()
{
    struct Node *curr;
    curr=head->Start;
    if(head->count==0)
    {
        printf("List is Empty .\n");
    }
    else
    {
        head->Start=curr->next;
        free(curr);
        (head->count)--;
    }
}

void Delete_Middle()
{
    int a;
    struct Node *curr;

    printf("Enter the value you want to Delete : \n");
    scanf("%d",&a);
    for(temp=head->Start; temp!=NULL; temp=temp->next)
    {
        if(temp->next->data==a)
        {
            curr=temp->next;
            temp->next=curr->next;
            free(curr);
            (head->count)--;
             break;
        }
    }
}

void Delete_Last()
{
    if(head->count==0)
    {
        printf("List is Empty .\n");
    }
    else
    {
        for(temp=head->Start; temp!=NULL; temp=temp->next)
        {
            if(head->count==1)
            {
                head->Start=NULL;
            }
            else
            {
                if(temp->next==head->End)
                {
                    head->End=temp;
                    temp->next=NULL;
                    (head->count)--;
                    break;
                }
            }
        }
    }
}

void IsEmpty()
{
    if(head->count==0)
    {
        printf("The List is Empty\n");
    }
    else
    {
        printf("The List is Not Empty.\n");
    }
}

void Search()
{
    int a,cnt=0,cnt1=0;
    printf("Enter the data you want to search : \n");
    scanf("%d",&a);
    for(temp=head->Start; temp!=NULL; temp=temp->next)
    {
        cnt++;
        if(temp->data==a)
        {
            printf("Data is Found.\n\n");
            printf("Data Position: %d\n\n\n",cnt);
            cnt1++;
            break;
        }
    }
    if(cnt1==0)
    {
        printf("Data is Not Found \n\n");
    }
}

void Traverse()
{
    printf("After Traversing . . . \n\n\n");

    if(head->count==0)
    {
        printf("List is Empty .\n");
    }
    else
    {
        for(temp=head->Start; temp!=NULL; temp=temp->next)
        {
            printf("%d ",temp->data);

        }
    }
    printf("\n\n");
}

void Menu()
{
    int a;
    while(1)
    {
        printf("Select Your Option \n\n");
        printf("Enter 1 to Insert In First\n");
        printf("Enter 2 to Insert In Middle\n");
        printf("Enter 3 to Insert In Last\n");
        printf("Enter 4 to Delete In First\n");
        printf("Enter 5 to Delete In Middle\n");
        printf("Enter 6 to Delete In Last\n");
        printf("Enter 7 to Check Is the List is Empty or Not\n");
        printf("Enter 8 to Search In LinkedList\n");
        printf("Enter 9 for EXIT\n\n\n");
        scanf("%d",&a);

        switch(a)
        {
        case 1:
            Insert_1st();
            Traverse();
            break;
        case 2:
            Insert_Middle();
            Traverse();
            break;
        case 3:
            Insert_last();
            Traverse();
            break;
        case 4:
            Delete_1st();
            Traverse();
            break;
        case 5:
            Delete_Middle();
            Traverse();
            break;
        case 6:
            Delete_Last();
            Traverse();
            break;
        case 7:
            IsEmpty();
            break;
        case 8:
            Search();
            Traverse();
            break;
        case 9:
            exit(0);
        default:
            system("CLS");
            printf("Enter According to option is given .\n\n");
        }
    }
}
int main()
{
    ListCreate();
    Menu();

    return 0;
}
