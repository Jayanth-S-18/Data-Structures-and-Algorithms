#include<iostream>
#include<vector>
using namespace std;
void unionofarr(vector<int> &arr1,vector<int> &arr2,int n1,int n2)
{
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1)
    {
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<n2)
    {
        ans.push_back(arr2[j]);
        j++;
    }
    cout<<"After union , the resultant array is: "<<endl;
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}
int main()
{
    cout<<"Enter the size of the sorted first array: "<<endl;
    int n1;
    cin>>n1;
    cout<<"Enter the array elements: "<<endl;
    vector<int> arr1(n1);
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of the sorted second array: "<<endl;
    int n2;
    cin>>n2;
    cout<<"Enter the array elements: "<<endl;
    vector<int> arr2(n2);
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    unionofarr(arr1,arr2,n1,n2);
}