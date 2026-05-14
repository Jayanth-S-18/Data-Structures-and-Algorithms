#include<iostream>
using namespace std;
void printagain(int n)
{
    if(n==0) return;
    printagain(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    printagain(n);
    return 0;
}