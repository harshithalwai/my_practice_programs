#include <bits/stdc++.h>
using namespace std;

int main()
{
system("cls");
    int row, col;
    cout << "row  : ";
    cin >> row;
    cout << "col: ";
    cin >> col;
    int arr[row][col];
    cout << "enter the elements of matix : \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter the value of arr[" << i << "][" << j << "]";
            cin >> arr[i][j];
        }
    }
    int tra_arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tra_arr[i][j]=arr[j][i];
        }
        system("cls");
        
    }
      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << tra_arr[i][j];
        }
        cout << endl;
    }
    return 0;
}