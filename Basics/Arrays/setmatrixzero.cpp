#include<iostream>
#include<vector>
using namespace std;
void setmatrixzero(vector<vector<int>> &arr,int m,int n)
{
    int col0=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
                arr[i][0]=0;
                if(j!=0)
                {
                    arr[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i][j] != 0) {
                if (arr[i][0] == 0 || arr[0][j] == 0) {
                arr[i][j] = 0;
                }
            }
        }
    }
    if (arr[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            arr[0][j] = 0;
        }
    }
    if(col0 == 0) {
        for (int i = 0; i < n; i++) {
            arr[i][0] = 0;
        }
    }
}
void display(vector<vector<int>> &arr,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"Enter m and n: ";
    int m,n;
    cin>>m>>n;
    vector<vector<int>> arr(m,vector<int>(n,0));
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    setmatrixzero(arr,m,n);
    display(arr,m,n);
    return 0;
}