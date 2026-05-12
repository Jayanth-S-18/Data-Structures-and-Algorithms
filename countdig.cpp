#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int count=0;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    cout<<n<<" has "<<count<<" digits"<<endl;
    return 0;
}