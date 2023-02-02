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
        cout<<"enter the element : ";
       cin>> arr[i];
    }
    cout<<"\n array elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
             if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
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