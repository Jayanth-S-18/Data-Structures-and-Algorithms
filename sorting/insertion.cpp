//select the min and swap sorting
#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> a(n,0);
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertionsort(a);
    
    return 0;
}