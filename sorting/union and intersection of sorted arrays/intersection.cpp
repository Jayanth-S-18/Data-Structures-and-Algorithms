#include<iostream>
#include<vector>
using namespace std;
void intersection(vector<int> &arr1,vector<int> &arr2,int n,int m)
{
    vector<int> result;
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else { j++;}
    }
    cout<<"The intersection array is: "<<endl;
    for(int k=0;k<result.size();k++)
    {
        cout<<result[k]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the first array: "<<endl;
    cin>>n;
    vector<int> arr1;
    cout<<"Enter the elements in the sorted order: "<<endl;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        arr1.push_back(val);
    }
    int m;
    cout<<"Enter the size of the second array: "<<endl;
    cin>>m;
    vector<int> arr2;
    cout<<"Enter the elements in the sorted order: "<<endl;
    for(int i=0;i<m;i++)
    {
        int val;
        cin>>val;
        arr2.push_back(val);
    }
    intersection(arr1,arr2,n,m);
    return 0;
}