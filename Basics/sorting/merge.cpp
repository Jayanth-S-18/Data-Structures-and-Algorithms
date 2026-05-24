#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    vector<int> left(n1),right(n2);
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[i+low];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else{
            arr[k++]=right[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }
    while(j<n2)
    {
        arr[k++]=right[j++];
    }
}
void mergesort(vector<int> &arr,int low,int high)
{
    if(low>=high) return;
    else{
        int mid=low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    
}
int main()
{
    int n;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}