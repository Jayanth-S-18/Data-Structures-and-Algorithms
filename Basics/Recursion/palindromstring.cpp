#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string &s,int l,int r)
{
    if(l>=r) return true;
    if(s[l]!=s[r]) return false;
    isPalindrome(s,l+1,r-1);
}
int main()
{
    string s;
    getline(cin,s);
    if(isPalindrome(s,0,s.length()-1))
    {
        cout<<"Given string is Palindrome"<<endl;
    }
    else cout<<"Given string is not a Palindrome"<<endl;
    return 0;
}