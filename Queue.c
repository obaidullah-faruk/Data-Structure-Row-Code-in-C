#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*temp;

struct Head
{
    int count;
    struct Node *front;
    struct Node *rear;
}*top;

void Create_Queue()
{
    top=(struct Head*)malloc(sizeof(struct Head));
    top->front=NULL;
    top->rear=NULL;
    top->count=0;
}

void Traverse()
{
    printf("After Traversing . . .  \n\n");
    for(temp=top->front;temp!=NULL;temp=temp->next)
    {
        printf("%d ",temp->data);
    }
    printf("\n\n");

}

void Enqueue()
{
    int a;
    printf("Enter the data you want to enqueue : \n");
    scanf("%d",&a);

    if(top->front==NULL)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=a;
        temp->next=NULL;

        top->front=temp;
        top->rear=temp;

    }
    else
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=a;
        top->rear->next=temp;
        temp->next=NULL;
        top->rear=temp;

    }
    top->count++;
    Traverse();
}

void Dequeue()
{
    temp=top->front;
    if(top->count==0)
    {
        printf("The Queue is Empty .\n");
    }
    else
    {
        top->front=top->front->next;
       // printf("Dequeued Value: %d",temp->data);
        free(temp);
        top->count--;
    }
    Traverse();
}

void Search()
{
    int a,cnt=0;
    printf("Enter the data you want to search : \n");
    scanf("%d",&a);
    for(temp=top->front;temp!=NULL;temp=temp->next)
    {
        cnt++;
        if(temp->data==a)
        {
            printf("Data is found . \n");
            printf("Data Position : %d\n\n\n",cnt);
            break;
        }
    }

}

void Destroy()  // Not working
{
    for(temp=top->front;temp!=NULL;temp=temp->next)
    {
        top->front=top->front->next;
      //  temp->data=(int)NULL;
        free(temp);
        top->count--;
    }
    Traverse();
}

void Menu()
{
    int choice;
    while(1)
    {
      printf("Enter 1 for Enqueue :\n");
      printf("Enter 2 for Dequeue :\n");
      printf("Enter 3 for Search:  \n");
      printf("Enter 4 for Destroy Queue: \n");
      printf("Enter 5 for Search in Queue: \n");
      printf("Enter 6 for EXIT \n");

      scanf("%d",&choice);
      switch(choice)
       {
       case 1:
         Enqueue();
         break;
       case 2:
         Dequeue();
         break;
       case 3:
         Search();
         break;
       case 4:
           Destroy();
           break;
       case 5:
           Search();
           break;
       case 6:
          exit(0);

     }
    }

}

int main()
{
    Create_Queue();
    Menu();

    return 0;
}
