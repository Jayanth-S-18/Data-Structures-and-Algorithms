//Best tecnique is XOR 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int xor1=0;
    int xor2=0;
    for(int i=1;i<=n;i++)
    {
        xor1=xor1^i;
    }
    for(int j=0;j<n-1;j++)
    {
        xor2=xor2^arr[j];
    }
    cout<<"The missing value is: "<<(xor1^xor2)<<endl;
    return 0;
}