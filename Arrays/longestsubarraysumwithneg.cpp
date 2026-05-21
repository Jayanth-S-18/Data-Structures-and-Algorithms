#include<iostream>
#include<map>
#include<vector>
using namespace std;
void subarraysum(vector<int> &arr,int n,int k)
{
    int sum=0;
    int maxlen=0;
    map<int,int> presum;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==k)
        {
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-k;
        if(presum.find(rem)!=presum.end())
        {
            int len=i-presum[rem];
            maxlen=max(maxlen,len);
        }
        if(presum.find(sum)==presum.end())
        {
            presum[sum]=i;
        }
    }
    cout<<"Max length is "<<maxlen<<endl;
}
int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the required sum: ";
    int sum;
    cin>>sum;
    subarraysum(arr,n,sum);
}