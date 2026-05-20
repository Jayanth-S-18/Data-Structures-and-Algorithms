#include<iostream>
#include<vector>
using namespace std;
void maxones(vector<int> &arr,int n)
{
    int count=0;
    int maxval=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]==0))
        {
            maxval=max(maxval,count);
            count=0;
        }
        if(arr[i]==1)
        {
            count++;
        }
        if(arr[n-1]==1)
        {
            maxval=max(maxval,count);
        }
    }
    cout<<"The maximum consecutive ones: "<<maxval<<endl;
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
    maxones(arr,n);
}