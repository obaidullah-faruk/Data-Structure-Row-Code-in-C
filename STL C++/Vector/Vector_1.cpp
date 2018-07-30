#include<iostream>
#include<vector>

using namespace std;

int main()
{
   vector<int> V;
   int i;

   cout<<"Size = "<<V.size()<<endl; // Display Original Size of V
   for(i=0;i<10;i++)
    V.push_back(i);   // Put value at the end of the vector .

   cout<<"Size Now = : "<<V.size()<<endl; // Display Current size .
   cout<<"Current Content of Vector : "<<endl;
   for(i=0;i<V.size();i++)
    cout<<V[i]<<" "; // Display current contents of vector .
   cout<<endl;

   for(i=0;i<10;i++)
    V.push_back(i+10); // Put more values into the end of the vector .

   cout<<"New Size: "<<V.size()<<endl;
   cout<<"Current Content : "<<endl;
   for(i=0;i<V.size();i++)
    cout<<V[i]<<" ";
   cout<<endl;

   for(i=0;i<V.size();i++)
    V[i]=V[i]+V[i];  // Change contents of vector .

   cout<<"After changing contents : "<<endl;
   for(i=0;i<V.size();i++)
    cout<<V[i]<<" ";
   cout<<endl;

    return 0;
}
