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
{
    for (int j = 0; j < size-i; j++)
    {
        
            if (arr[j] > arr[j+1])
            {
                int temp;
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
    }
     
}
   cout<<"\n sorted array elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
return 0;
}