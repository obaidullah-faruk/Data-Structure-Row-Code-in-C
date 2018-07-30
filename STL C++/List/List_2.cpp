#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<char> L;
    list<char> Rev;
    int i;
    for(i=0;i<10;i++)
    {
        L.push_back('A'+i);
    }
    cout<<"Size : "<<L.size()<<endl;


    return 0;
}
