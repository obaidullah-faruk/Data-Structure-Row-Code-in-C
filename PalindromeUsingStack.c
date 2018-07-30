
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#define char Str[20];
#define char Str2[20];

using namespace std;
struct node
{
    char data[20]; 
    struct node *next;
}*temp;

struct Head
{
    int count;
    struct node *top;
}*head;

void create()
{
    head=(struct Head *)malloc(sizeof(struct Head));
    head->count = 0;
    head->top = NULL;
}

void push() 
{

    printf("Enter the string : \n");
    cin>>Str[20];

    for (i=0; Str[i]!=NULL; i++)
    {
        if(head->count==0)
        {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->data[i] = Str[i];
            temp->next = NULL;
            head->top = temp;
        }
        else
        {
            temp=(struct node *)malloc(sizeof(struct node));
            temp->data[i] = Str[i];
            temp->next = head->top;
            head->top = temp;
        }
        head->count++;

    }

}

void pop() 
{

    for(i=0; data[i]!=NULL; i++)
    {
        head->top=Str2[i];
        head->top=head->top->next;

        head->count--;
    }

}

void PalindromeChk()
{
    if(strcmp(Str,Str2)==0)
    {
        printf("Strin is Palindrome .\n");
    }
    else
    {
        printf("Not ");
    }

}


int main()
{
    create();
    push();
    pop();
    PalindromeChk();
}

