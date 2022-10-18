// detro da função, voce pode adicionar quantos parametros quiser.

#include <iostream>
#include <string>

using namespace std;

void myFunction(string fname, int age)
{
              cout << fname << " Refsnes. " << age << " years old. \n";
}

int main()
{
              myFunction("fabio", 38);
              myFunction("Aline", 36);
              myFunction("Jully", 12);

              return 0;
}