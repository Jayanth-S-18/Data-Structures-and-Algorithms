#include<iostream>
#include<vector>
using namespace std;
void subarraysum(vector<int> &arr,int n,int k)
{
    int left=0;
    int count=arr[0];
    int right=0;
    int maxlen=0;
    while(right<n)
    {
        while(left<=right && count>k)
        {
            count-=arr[left];
            left++;
        }
        if(count==k)
        {
            maxlen=max(right-left+1,maxlen);
        }
        right++;
        if(right<n) { count+=arr[right];}

    }
    cout<<"Longest Subarray with given sum is: "<<maxlen<<endl;
}
int main()
{
    cout<<"Enter the size: ";
    int n;
    cin>>n;
    cout<<"Enter the sum value: "<<endl;
    int sum;
    cin>>sum;
    cout<<"Enter the elements: "<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    subarraysum(arr,n,sum);
}