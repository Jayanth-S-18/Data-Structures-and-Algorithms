#include<iostream>
using namespace std;
void printagain(int n)
{
    if(n==0) return;
    cout<<"what ra sudeep"<<endl;
    printagain(n-1);
}
int main()
{
    int n;
    cin>>n;
    printagain(n);
    return 0;
}