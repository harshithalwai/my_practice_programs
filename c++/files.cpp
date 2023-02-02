#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    //files operations by the constructor
    //for output ------------> output
// ofstream out("sample.txt");
// //out is used to write in the file it delete alll the matter and rewrite the file;
// out<<"hello my name is harshit"<<endl;
// out<<"hello my name is vinayak";
ifstream in("sample.txt");
string a,b;
in>>a;
getline(in,b);

cout<<a<<endl<<b;


return 0;
}