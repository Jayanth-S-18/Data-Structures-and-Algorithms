#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &arr,int low,int high)
{
    while(low<=high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
void nextpermutation(vector<int> &arr)
{
    int n=arr.size();
    int breakpoint=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            breakpoint=i;
            break;
        }
    }
    if(breakpoint==-1)
    {
        reverse(arr,0,n-1);
    }
    for(int j=n-1;j>breakpoint;j--)
    {
        if(arr[j]>arr[breakpoint])
        {
            int temp=arr[j];
            arr[j]=arr[breakpoint];
            arr[breakpoint]=temp;
            break;
        }
    }
    reverse(arr,breakpoint+1,n-1);
    cout<<"The next permutation is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array elements: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    nextpermutation(arr);
    return 0;
}