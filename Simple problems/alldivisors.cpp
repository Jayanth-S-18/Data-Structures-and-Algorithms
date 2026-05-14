#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" is a divisor of "<<n<<endl;
            if(i!=n/i)
            {
                cout<<n/i<<" is a divisor of "<<n<<endl;
            }
        }
    }
    return 0;
}