#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row1, col1;
    cout << "row 1 : ";
    cin >> row1;
    cout << "col1: ";
    cin >> col1;
    int arr1[row1][col1];
    cout << "enter the elements of first matix : ";
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << "enter the value of arr1[" << i << "][" << j << "]";
            cin >> arr1[i][j];
        }
    }
    int row2, col2;
    cout << "row 2 : ";
    cin >> row2;
    cout << "col2: ";
    cin >> col2;
    int arr2[row2][col2];
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << "enter the value of arr2[" << i << "][" << j << "]";
            cin >> arr2[i][j];
        }
    }
    int arr[row1][col2];
    cout << endl
         << "lets multiply" << endl;
    if (col1 != row2)
    {
        cout << "cant multiply";
    }
    else
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                int sum = 0;
                for (int k = 0; k < col1; k++)
                {
                    sum = sum + arr1[i][k] * arr2[k][j];
                }
                arr[i][j] = sum;
            }
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}