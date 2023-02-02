#include <bits/stdc++.h>
using namespace std;
/* syntax for creaating the template*/
template<class t>
class vec
{

public:
    t *arr;
    t size;

    vec()
    {
        cout<<"enter the size : ";
        cin>>size;
        arr = new t[size];
    };
    t mul(vec v){
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        
        
        return d;
    }
};

int main()
{ 
    //data type define the data type in this<> 
    vec<int> v1;
    vec <int>v2;
    v1.arr[0]=1;
    v1.arr[1]=2;
    v1.arr[2]=3;

    v2.arr[0]=1;
    v2.arr[1]=1;
    v2.arr[2]=1;
    cout<<v1.mul(v2);
    return 0;
}
