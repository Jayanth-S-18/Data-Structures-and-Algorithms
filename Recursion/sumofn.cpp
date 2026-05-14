#include<iostream>
using namespace std;
int addi(int n)
{
    if(n==0) return 0;
    else return n+addi(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<addi(n);
    return 0;
}   