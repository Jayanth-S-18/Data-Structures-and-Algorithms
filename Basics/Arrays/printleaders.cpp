#include<iostream>
#include<vector>
using namespace std;
void printleaders(vector<int> &arr)
{
    vector<int> ans;
    int n=arr.size();
    int maxi=arr[n-1];
    ans.push_back(maxi);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>maxi)
        {
            ans.push_back(arr[i]);
            maxi=arr[i];
        }
    }
    cout<<"The leaders in the array are: ";
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printleaders(arr);
    return 0;
}