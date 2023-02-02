#include <bits/stdc++.h>
using namespace std;
void max_till_i(int arr[], int size)
{
    cout << endl
         << "\t\t going to print max till i :\n ";
    int maximum = arr[0];
    cout << "max terms are : " << maximum << " ";
    for (int i = 1; i < size; i++)
    {
        maximum = max(maximum, arr[i]);
        cout << maximum << " ";
    }
}
int main()
{
    int size;
    cout << "enter the size : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element os array : ";
        cin >> arr[i];
    }
    cout << "array elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    // calling the max till i function
    //  max_till_i(arr,size);
    // sum of all subarrays :
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            cout << endl<<sum<<" ";
        }cout<<endl;
    }

    return 0;
}
