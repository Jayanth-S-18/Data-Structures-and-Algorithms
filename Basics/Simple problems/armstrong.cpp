#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dig=log10(n)+1;
    int res=0;
    int temp=n;
    while(temp!=0)
    {
        int x=temp%10;
        res=res+round(pow(x,dig));
        temp/=10;
    }
    if(res==n)
    {
        cout<<"It is an armstrong number"<<endl;
    }
    else cout<<"Not an armstrong number"<<endl;
}