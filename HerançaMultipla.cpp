// Herança multipla é uma classe tambem pode ser derivada de mais de uma classe base, usando uma lista separada por virgulas:

#include <iostream>
using namespace std;

class MyClass
{
              void myFunction()
              {
                            cout << "Some content in parent class.\n";
              }
};

class MyOtherClass
{
public:
              void myOtherFunction()
              {
                            cout << "Some content in another class. \n";
              }
};

class MyChildClass : public MyClass, public MyOtherClass
{
};

int main()
{
              MyChildClass myObj;
              myObj.myOtherFunction();
              myObj.myOtherFunction();
              return 0;
}
