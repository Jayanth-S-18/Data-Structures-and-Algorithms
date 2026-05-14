#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    map<int,int> freq; // use unordered map and u can see result from the last pair 
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for(auto it:freq)
    {
        cout<<it.first<<" has occured "<<it.second<<" times"<<endl;
    }
    return 0;
}