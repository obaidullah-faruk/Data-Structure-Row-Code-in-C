#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *Left;
    struct Node *Right;
};

struct node *root = NULL;

/* struct Root
{
    int count;
    struct Node *P;
}*root;  */

/* void Create_Root()
{
    root=(struct Root*)malloc(sizeof(struct Root));
    root->count=0;
    root->P=NULL;
}  */

void Insert(struct Node *P,int data)
{

    if(P== NULL) {
        // create the 1st node (root)
        struct Node *Q = (struct Node*)malloc(sizeof(struct Node));
        Q->Left = NULL;
        Q->Right = NULL;
        Q->data = data;
        root = Q;
        return;
    }
    else if(data < P->data && P->Left != NULL) {
        P = P->Left;
        Insert(P,data);
    }
    else if(data > P->data && P->Right != NULL) {
        P = P->Right;
        Insert(P,data);
    }
    else if(P->Left == NULL && data < P->data) {
        struct Node *Q = (struct node*)malloc(sizeof(struct Node));
        Q->data = data;
        Q->Right = NULL;
        Q->Left = NULL;
        P->Left = Q;
        return;
    }
    else if(P->Right == NULL  && data > P->data) {
        struct Node *Q = (struct node*)malloc(sizeof(struct Node));
        Q->data = data;
        Q->Right = NULL;
        Q->Left = NULL;
        P->Right = P;
        return;
    }

}

void PreOrder(struct Node *P)
{



}

void InOrder(struct Node *P )
{
        if(P != NULL) {
        InOrder(P->Left);
        printf("%d\n",P->data);
        InOrder(P->Right);
    }

}

void PostOrder(struct Node *P)
{


}

/* void Menu()
{
    int a,X;
    while(1)
    {
        printf("Enter 1 to Insert in Tree .\n");
        printf("Enter 2 to See Tree in PreOrder. \n");
        printf("Enter 3 to See Tree in InOrder. \n");
        printf("Enter 4 to See Tree in PostOrder. \n");
        printf("Enter 5 to Exit .\n\n");

        scanf("%d",&a);
        switch(a)
        {
        case 1:
            printf("Enter the data you want to Insert : \n");
            scanf("%d",&X);
            Insert(root,X);
            break;
        case 2:
            PreOrder(root);
            break;
        case 3:
            InOrder(root);
            break;
        case 4:
            PostOrder(root);
            break;
        case 5:
            exit(0);
        default:
            system("CLS");
            printf("Enter according to your menu .\n\n");
        }
    }
} */

int main()
{
  //  Create_Root();
   // Menu();
     int a,X;
    while(1)
    {
        printf("Enter 1 to Insert in Tree .\n");
        printf("Enter 2 to See Tree in PreOrder. \n");
        printf("Enter 3 to See Tree in InOrder. \n");
        printf("Enter 4 to See Tree in PostOrder. \n");
        printf("Enter 5 to Exit .\n\n");

        scanf("%d",&a);
        switch(a)
        {
        case 1:
            printf("Enter the data you want to Insert : \n");
            scanf("%d",&X);
            Insert(root,X);
            break;
        case 2:
            PreOrder(root);
            break;
        case 3:
            InOrder(root);
            break;
        case 4:
            PostOrder(root);
            break;
        case 5:
            exit(0);
        default:
            system("CLS");
            printf("Enter according to your menu .\n\n");
        }
    }

    return 0;
}
