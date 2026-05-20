#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    cout<<"Enter the size of array: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    cout<<"The unique elements are: "<<endl;
    for(auto it:freq)
    {
        if(it.second==1)
        {
            cout<<it.first<<endl;
        }
    }
    return 0;
}