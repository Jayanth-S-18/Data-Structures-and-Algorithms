#include<iostream>
#include<climits>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        freq[val]++;
    }
    int minele=INT_MAX;
    int minval=INT_MAX;
    int maxele=INT_MIN;
    int maxval=INT_MIN;
    for(auto it:freq)
    {
        if(it.second<minval)
        {
            minval=it.second;
            minele=it.first;
        }
        if(it.second>maxval)
        {
            maxval=it.second;
            maxele=it.first;
        }
    }
    cout<<"Minumum element and value(occurence): "<<minele<<" "<<minval<<endl;
    cout<<"Maximum element and value(occurence): "<<maxele<<" "<<maxval<<endl;
}