#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortarray(vector<int> &arr,int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main()
{
    cout<<"enter n: ";
    int n;
    cin>>n;
    cout<<"Enter the elements(only 0,1 and 2): "<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sortarray(arr,n);
    cout<<"After sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}