#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int size;
    cout << "enter the size : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the element os array : ";
        cin>>arr[i] ;
    }
    cout<<"array elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 1; i < size; i++)
    {int j;
        for ( j = i-1;(arr[j]>arr[i]),j>=0 ; j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=arr[i];
    }
 cout<<"array elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }   
return 0;
}