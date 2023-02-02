#include <bits/stdc++.h>
using namespace std;

int main()
{
            //  google kick start queston!!!!!!!!!!

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
    cout << endl;

    int previous_diffrence = arr[1] - arr[0];
    int ans = 2;
    int current = 2;

    for (int i = 2; i < size; i++)
    {
        if (previous_diffrence == arr[i] - arr[i - 1])
        {
            // previous_diffrence = arr[i] - arr[i - 1];
            current++;
        }
        else
        {
            previous_diffrence =arr[i] - arr[i - 1];
            current = 2;
        }
         ans=max(ans,current);
    }
   

cout<<" longest subarray length is : "<<ans;

    return 0;
}