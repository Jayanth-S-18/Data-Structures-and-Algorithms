#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        int n;
        vector<int> arr;
        void getval()
        {
            cout<<"Enter the size of the array: "<<endl;
            cin>>n;
            cout<<"Enter the array elements: "<<endl;
            for(int i=0;i<n;i++)
            {
                int val;
                cin>>val;
                arr.push_back(val);
            }
        }
        void rotate()
        {
            int temp=arr[0];
            for(int i=1;i<n;i++)
            {
                arr[i-1]=arr[i];
            }
            arr[n-1]=temp;
        }
        void display()
        {
            cout<<"Array elements after rotation : "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
        }

};
int main()
{
    cout<<"Left rotate array by 1 place !!"<<endl;
    Solution s;
    s.getval();
    s.rotate();
    s.display();
}