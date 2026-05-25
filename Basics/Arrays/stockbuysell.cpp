#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int stockmarket(vector<int> &arr)
{
    int minprice=INT_MAX;
    int maxprofit=INT_MIN;
    int daytotake=-1;
    int daytosell=-1;
    for(int i=0;i<7;i++)
    {
        minprice=min(minprice,arr[i]);
        maxprofit=max(maxprofit,arr[i]-minprice);
    }
    return maxprofit;
}
int main()
{
    cout<<"Enter the stock price details of 7 days: "<<endl;
    vector<int> arr(7,0);
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    cout<<"The profit is: "<<stockmarket(arr);
    return 0;
}