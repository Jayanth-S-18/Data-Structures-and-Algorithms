#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int num=a;
    int res=0;
    while(a!=0)
    {
        int dig=a%10;
        res=res*10+dig;
        a/=10;
    }
    cout<<num<<" reverse is "<<res<<endl;
    //if(num==res) cout<<"It is palindrome";
    return 0;
}