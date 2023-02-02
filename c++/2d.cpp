#include<bits/stdc++.h>
using namespace std;
    
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
int row , col;
cin>>row>>col;
int arr[row][col];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin>>arr[i][j];
    }
    
}
int num ;
cin>>num;
bool flag=false;
int x,y;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        if (num==arr[i][j])
        {
            // cout<<"element is at index i : "<<i<<" j: "<<j;
x=i;
y=j;
             flag=true;
        }
        
    }
    
}
if (flag)
{
    cout<<"element found at index i : "<<x<< " j : "<<y;
}


return 0;
}