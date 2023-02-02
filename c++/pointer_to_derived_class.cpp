#include<iostream>
using namespace std;
    class base{
        public:
        int base_var;
        void base_put(){
            cout<<base_var<<endl;
        }
        
    };
    class derived : public base{
        public:
        int derived_var;
        void derived_put(){
            cout<<derived_var<<endl;
        }
        
    };
int main()
{
// base *b,a;
// b=&a;
// (*b).base_var=5;
// (*b).put();
// b->base_var=456789;
// b->put();
// base *baseobj=new base();
// baseobj->base_var=000;
// baseobj->put();
base *baseptr;
base baseobj;
derived derobj;
baseptr=&derobj;
baseptr->base_var=767;
baseptr->base_put();


return 0;
}