#include <bits/stdc++.h>
using namespace std;
int binary_to_decimal(int x)
{
    int sum = 0;
    int base = 1;
    while (x != 0)
    {
        int a = x % 10;
        sum += a * base;
        base *= 2;
        x /= 10;
    }
    return sum;
}
int octal_to_decimal(int x)
{
    int sum = 0;
    int base = 1;
    while (x != 0)
    {
        int a = x % 10;
        sum += a * base;
        base *= 8;
        x /= 10;
    }
    return sum;
}
int hexadecimal_to_decimal(string x)
{
    int sum = 0;
    int base = 1;
    int size = x.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if ((x[i] >= '0') && (x[i] <= '9'))
        {
            sum += base * (x[i] - '0');
        }
        if ((x[i] >= 'A') && (x[i] <= 'F'))
        {
            sum += base * ((x[i] - 'A') + 10);
        }
        base *= 16;
    }
    return sum;
}

int main()
{
cout<<binary_to_decimal(101)<<endl;
cout<< octal_to_decimal(17)<<endl;
cout<<hexadecimal_to_decimal("A");
    return 0;
}