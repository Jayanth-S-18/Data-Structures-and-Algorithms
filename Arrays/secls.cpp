#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n<2) cout<<"invalid input.."<<endl;
    else{
        int small=INT_MAX;
        int secsm=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<small)
            {
                secsm=small;
                small=arr[i];
            }
            else if(arr[i]<secsm && arr[i]!=small)
            {
                secsm=arr[i];
            }
        }
        cout<<"The smallest element is "<<small<<endl;
        cout<<"The second smallest element is "<<secsm<<endl;
    }
    return 0;
}