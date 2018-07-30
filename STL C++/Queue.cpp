#include<iostream>
#include<queue>
#include<cstdlib>

using namespace std;

int main()
{
    queue<int>q;

    int choice,item;

    while(1)
    {
        cout<<"Queue Implementation in STL :"<<endl;
        cout<<"Enter 1 to Insert element into Queue : "<<endl;
        cout<<"Enter 2 to Delete element from the Queue : "<<endl;
        cout<<"Enter 3 to see the size of Queue : "<<endl;
        cout<<"Enter 4 to show the Front element of the Queue : "<<endl;
        cout<<"Enter 5 to show the Last element of the Queue : "<<endl;
        cout<<"Enter 6 for EXIT : "<<endl;

        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Enter the value to be inserted : "<<endl;
            cin>>item;
            q.push(item);
            break;
        case 2:
            item=q.front();
            q.pop();
            cout<<"Element "<<item<<" Deleted "<<endl;
            break;

        case 3:
            cout<<"Size of Queue is : "<<q.size()<<endl;
            break;
        case 4:
            cout<<"Front element of the queue : "<<q.front()<<endl;
            break;
        case 5:
            cout<<"Last element of the queue : "<<q.back()<<endl;
            break;
        case 6:
            exit(0);

        }
    }
    return 0;
}
