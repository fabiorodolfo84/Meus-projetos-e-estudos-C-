// Herança multinivel

// uma classe tambem pode ser derivada de uma classe, que ja é derivada de outra classe.

// no exemplo a seguir, MyGrandChild é derivado da classe MyChild (que é derivado a partir de MyClass).

#include <iostream>
using namespace std;

class MyClass
{
public:
              void myFunction()
              {
                            cout << "Some content in parent class. ";
              }
};

class MyChild : public MyClass
{
};

class MyGrandChild : public MyChild
{
};

int main()
{
              MyGrandChild myObj;
              myObj.myFunction();
              return 0;
}