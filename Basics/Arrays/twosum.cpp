#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution{
    public:
        map<int,int> hash;
        void twosum(vector<int> a,int n,int target)
        {
            for(int i=0;i<n;i++)
            {
                int num=a[i];
                int more=target-num;
                if(hash.find(more)!=hash.end())
                {
                    cout<<"Found and there values are: "<<num<<" and "<<more<<endl;
                }
                hash[num]=i;
            }   

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