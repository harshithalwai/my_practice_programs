#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cout << "enter the size : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int s = 0, l = size, mid;
    int num;
    cin >> num;
    while (s <= l)
    {
        mid = (s + l) / 2;
        if (num == arr[mid])
        {
            cout << mid;
        }
        if (num > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            l = mid - 1;
        }
    }

    return 0;
}