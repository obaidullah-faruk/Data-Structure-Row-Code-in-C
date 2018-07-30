#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<char> L; // Creating an empty list
    int i;

    for(i=0;i<10;i++)
    {
        L.push_back('A'+i);
    }
    cout<<endl;
    cout<<"Size of the list : "<<L.size()<<endl;
    cout<<"Contents : "<<endl;
    list<char>::iterator P;

    while(!L.empty())
    {
        P=L.begin();
        cout<<*P;
        L.pop_front();
    }

    return 0;
}
