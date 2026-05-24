//select the min and swap sorting
#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
       for(int j=0;j<n-i-1;j++)
       {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
            swapped=true;
        }
       }
       if(!swapped)
       {
        break;
       }
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
    bubblesort(a);
    
    return 0;
}