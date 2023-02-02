// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int *p = new int;
//     *p = 45;

//     cout << p << endl;
//     cout << *p << endl; 

//     int *arr=new int[4]{2,5,1,2};
//     // arr[0]=1;
//     // arr[1]=2;
//     // arr[2]=3;
//     // arr[3]=4;
//     // arr[4]=5;
//     arr[2]=65;
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<*(arr+i);
//     }
//     cout<<endl;
// // delete[] arr;
// // for (int i = 0; i < 4; i++)
// //     {
// //         cout<<*(arr+i);
// //     }


//     return 0;
// }
/*                creating new class                                                           */
#include<bits/stdc++.h>
using namespace std;
   class com
   {
   private:
    int real,complex;
   public:
    void set(int x,int y){
        real=x;
        complex=y;

    }
    void display(){
        cout<<real<<endl<<complex<<endl;
    }
   };
    
int main()
{
system("cls");
// com a(3,4);
// a.display();
// com *ptr=&a;
// (*ptr).display();
com *ptr=new com[2];
(*ptr).display();
(ptr+1)->display();




return 0;
}
