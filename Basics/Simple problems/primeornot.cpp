#include<iostream>
using namespace std;
bool isPrime(int n)
{
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    return (count==1);
}
int main()
{
    int n;
    cin>>n;
    isPrime(n)?cout<<"true":cout<<"false";
    return 0;
}