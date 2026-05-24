#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public: 
        void movezerotoend(vector<int> &arr,int n)
        {
            int j=-1;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==0)
                {
                    j=i;
                    break;
                }
            }
            if(j==-1)
            { 
                cout<<"No zeroes in the array"<<endl;
                return;
            }
            for(int i=j+1;i<n;i++)
            {
                if(arr[i]!=0)
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    j++;
                }
            }
            cout<<"The array elements after moving zeros to the end are: "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
        }

};
int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Solution s;
    s.movezerotoend(arr,n);
    return 0; 
}