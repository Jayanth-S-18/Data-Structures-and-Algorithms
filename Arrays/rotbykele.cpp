#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
        int k;
        int n;
        vector<int> arr; 
        void getdata()
        {
            cout<<"Enter the size of the array"<<endl;
            cin>>n;
            cout<<"Enter the elements: "<<endl;
            for(int i=0;i<n;i++)
            {
                int val;
                cin>>val;
                arr.push_back(val);
            }
            cout<<"Enter the value of k: ";
            cin>>k;
        }
        void display()
        {
            cout<<"The elements in the array are: "<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        void rotate()
        {
            vector<int> temp(k);
            for(int i=0;i<k;i++)
            {
                temp[i]=arr[i];
            }
            for(int i=0;i<=n-k-1;i++)
            {
                arr[i]=arr[i+k];
            }
            for(int i=0;i<n;i++)
            {
                arr[n-k+i]=temp[i];
            }
            cout<<"Done with rotation"<<endl;
        }
};
int main()
{
    Solution s;
    s.getdata();
    s.display();
    s.rotate();
    s.display();
}


/*Optimised approach
#include <iostream>
using namespace std;
// Function to Reverse the array
void Reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
    }
}//
Function to Rotate k elements to left
void Rotateeletoleft(int arr[], int n, int k)
{
    // Reverse first k elements
    Reverse(arr, 0, k - 1);
    // Reverse last n-k elements
    Reverse(arr, k, n - 1);
    // Reverse whole array
    Reverse(arr, 0, n - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;
    Rotateeletoleft(arr, n, k);
    cout << "After Rotating the k elements to left ";
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
    return 0;
}
*/