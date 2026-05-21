#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public: 
        void twosum(vector<int> &arr,int n,int target)
        {
            int i=0;
            int j=n-1;
            int flag=0;
            while(i<=j)
            {
                if(arr[i]+arr[j]==target) 
                {
                    cout<<"Elements found in "<<i<<" and "<<j<<" position.Values are: "<<arr[i]<<" "<<arr[j]<<endl;
                    i++;
                    j--;
                    flag=1;
                }
                else if(arr[i]+arr[j]<target)
                {
                    i++;
                }
                else{
                    j--;
                }
            }
            if(flag==0){cout<<"two sum not found!!";}
        }
};
int main()
{
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the taget ";
    int target;
    cin>>target;
    Solution S;
    S.twosum(arr,n,target);
}