// #include<bits/stdc++.h>
// using namespace std;
//    class employe
//    {
//    private:
//     int salary;
//    public:
//    int id;
//     employe(){
//         cout<<"enter the id of the employee : ";
//         cin>>id;
//         cout<<"enter the salary of the employee : ";
//         cin>>salary;

//     }
//     ~employe(){
//         cout<<"deleting the counstructor"<<endl;
//     }
//     void display(){
//         cout<<"the id of the employe is "<<id<<" and salary is "<<salary<<endl;
//     }
//     int getsalary(){
//         return salary ;
//     }
//     int getid(){
//         return id;
//     }
//    };
//    class programmer : public employe{
// string skill;
// public:
// programmer(){
//     cout<<"enter your skill ";
//     cin>>skill;
// }
// ~programmer(){
//     cout<<"deleting the counstructer"<<endl;
// }
//  void display(){
//         cout<<"the id of the employe is "<<id<<" and salary is "<<getsalary()<< "and your skill is "<<skill<<endl;
//     }
//    };
// int main()
// {
//     system("cls");
//     cout<<"\n\t\t===========oops toturials==================\n\n\n";
// programmer har;

// har.display();
// return 0;
// }
                         /* new class */
#include <bits/stdc++.h>
using namespace std;
class test
{
private:
    int a, b;

public:
    test(int x, int y) : b(y), a(x+b){

    };
    void s(){
        cout<<a<<endl<<b;
    }
};

int main()
{
test h(1,2);
h.s();
    return 0;
}