#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    cout<<"After removing duplicates: "<<endl;
    for(int k=0;k<=i;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}