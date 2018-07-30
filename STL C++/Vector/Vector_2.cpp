#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> V;
    int i;

    for(i=0; i<10; i++)
        V.push_back(i);

    for(i=0; i<V.size(); i++)
        cout<<V[i]<<" ";  // Access vector contents using subscripting .
    cout<<endl;

    vector<int>::iterator P=V.begin();  // Access using Iterator .
    while(P!=V.end())
    {
        cout<<*P<<" ";
        P++;
    }

    return 0;
}
