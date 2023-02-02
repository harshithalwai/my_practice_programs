#include <bits/stdc++.h>
using namespace std;
// we are going to do the operation on array !!!!
// in array the elements are allocated in coontigioud memory blocks
int main()
{
    
    int size;
    cout << "enter the size of array : ";
    cin >> size;
    int arr[size];
    int n;
    cout << "enter how many elements you want to insert : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    // // insertion in array
     int pos;
    // int num;
    cout << "enter the position : ";
     cin >> pos;
    // cout << "ener which numbr youo want to insert : ";
    // cin >> num;
    // for (int i = n; i >= pos; i--)
    // {
    //     arr[i + 1] = arr[i];
    // }
    // n++;
    // arr[pos] = num;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

//deletion of array
// for (int i = pos-1; i <n; i++)
// {
//     arr[i]=arr[i+1];
// }
// n--;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }

    return 0;
}