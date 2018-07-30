#include<stdio.h>
#include<stdlib.h>

struct Node // Declaring node both for LinkedList and Queue
{
    int data;
    struct Node *next;
}*temp,*temp2; // temp for LinkedList , temp2 for Queue

struct Head // Declaring for LinkedList
{
    int count;
    struct Node *Start;
    struct Node *End;
}*head;

struct QHead // Declaring for Queue
{
    int count;
    struct Node *Front;
    struct Node *Rear;
}*Qhead;

void ListCreate()  // ListCrete for LinkedList
{
    head=(struct Head*)malloc(sizeof(struct Head));
    head->Start=NULL;
    head->End=NULL;
    head->count=0;
}

void Create_Queue() // QueueCreate for Queue
{
    Qhead=(struct QHead*)malloc(sizeof(struct QHead));
    Qhead->Front=NULL;
    Qhead->Rear=NULL;
    Qhead->count=0;
}


void Insert() // Inserting in LinkedList
{
    int i,a;  // i for for loop , a for number input

    for(i=1; i<=7; i++)  // Though, from question total given input number is 7 .. so , loop will continue till 7 . if number varies , then loop size will vary
    {
        printf("Enter Data : ");
        scanf("%d",&a);

        if(head->count==0) // When List is empty. For 1st Input actually
        {
            temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=a;
            temp->next=NULL;

            head->Start=temp;
            head->End=temp;
            (head->count)++; // Don't forget increase count .
        }
        else  // when list is not empty
        {
            temp=(struct Node*)malloc(sizeof(struct Node));
            temp->data=a;
            temp->next=NULL;

            head->End->next=temp;
            head->End=temp;

            (head->count)++;
        }
    }
}

void Traverse()  // Traversing for LinkedList .
{
    printf("After Inserting The List Is :. . . \n\n");
    for(temp=head->Start; temp!=NULL; temp=temp->next)
    {
        printf("%d ",temp->data);
    }
    printf("\n\n");
}

void Enqueue()  // Now Enqueue in Queue ( Here I did this for negative numbers )
{
    for(temp=head->Start; temp!=NULL; temp=temp->next) // Linkedlist Traverse kortesi
    {
        if(temp->data<0) // Less than 0 means Negative , that's why checking negative . If positive then greather than 0 hbe .
        {
            if(Qhead->count==0) // When Queue is Empty . for 1st actually
            {
                temp2=(struct Node*)malloc(sizeof(struct Node));
                temp2->data=temp->data;
                temp2->next=NULL;

                Qhead->Front=temp2;
                Qhead->Rear=temp2;

                (Qhead->count)++;
            }
            else // when queue is not empty
            {
                temp2=(struct Node*)malloc(sizeof(struct Node));
                temp2->data=temp->data;
                Qhead->Rear->next=temp2;
                temp2->next=NULL;
                Qhead->Rear=temp2;

                (Qhead->count)++; // Ami count korte vuila gesilam.. code error ashsilo 1st e tai... :D , so ...
            }
        }
    }
}

void QTraverse() // Jei koyta queue te dhukse oi gula Traverse kore show kortesi
{
    printf("Negative Number's of the List : \n\n");
    for(temp2=Qhead->Front;temp2!=NULL;temp2=temp2->next) // temp2 for queue
    {
        printf("%d ",temp2->data);
    }
    printf("\n\n");
}

int main()
{
    ListCreate(); // 1st e ListCreate means Head Create hbe
    Insert(); // Then direct Insert() function call korbe 
    Traverse();  // Then same eikhane aisha Traverse function call hbe ...
    Create_Queue(); // Then Traverse function er kaj shesh hoile ei function call hbe
    Enqueue(); // Same...
    QTraverse(); // Same ei function call hbe

    return 0;
}
