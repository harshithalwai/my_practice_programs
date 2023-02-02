#include <iostream>
using namespace std;
class student
{
private:
  int roll;

public:
 student& set(int roll)
  {

    this->roll = roll;
    return *this;
  }
  void get()
  {
    cout << roll << endl;
  }
};

int main()
{
  student harshit;
  harshit.set(1).get();
  // harshit.get();
  student *shivam = new student();
  shivam->set(2);
  shivam->get();
  student *nandu = new student();
  (*nandu).set(3);
  (*nandu).get();
  return 0;
}