#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> V(5,7);

    cout<<"Size : "<<V.size()<<endl;
    cout<<"Orginal Contents : "<<endl;
    for(int i=0; i<V.size(); i++)

        cout<<V[i]<<" ";
    cout<<endl;

    vector<int>::iterator P=V.begin();
    P+=2;
    V.insert(P,10,9);
    cout<<"Size after insertion : "<<V.size()<<endl;
    for(int i=0; i<V.size(); i++)
        cout<<V[i]<<" ";
    cout<<endl;

    // Remove those elements
    P=V.begin();
    P+=2;
    V.erase(P,P+2);

    cout<<"Size after erase : "<<V.size()<<endl;
    cout<<"Contents after erase :"<<endl;
    for(int i=0; i<V.size(); i++)
        cout<<V[i]<<" ";

    return 0;
}
