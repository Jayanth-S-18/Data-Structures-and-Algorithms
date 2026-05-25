#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int kadanealgo(vector<int> &arr)
{
    int n=arr.size();
    int maxi=INT_MIN;
    int sum=0;
    int start=0;
    int ansstart=-1;
    int ansend=-1;
    for(int i=0;i<n;i++)
    {
        if(sum==0) start=i;
        sum+=arr[i];
        if(sum>maxi)
        {
            maxi=sum;
            ansstart=start;
            ansend=i;
        }
        if(sum<0)
        {
            sum=0;
        } 
    }
    cout<<"The subarray is ";
    for(int i=ansstart;i<=ansend;i++)
    {
        cout<<arr[i]<<" ";
    }
    return maxi;
}
int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum subarray value : "<<kadanealgo(arr);
        return 0;
}