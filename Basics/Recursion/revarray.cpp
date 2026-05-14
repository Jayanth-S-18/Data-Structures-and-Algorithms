#include<iostream>
#include<vector>
using namespace std;
void revarr(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
        revarr(arr,low,high);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    revarr(arr,0,n-1);
    cout<<"array elements after reversing"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}