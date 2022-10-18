// criando ponteiros

// podemos obter a memoria endereço de uma variavel usando o & operador:

#include <iostream>
#include <string>
using namespace std;
/*
int main()
{
              string food = "Donuts";
              cout << food << "\n";
              cout << &food << "\n";

              return 0;
}
*/

int main()
{
              string food = "Pizza";
              string *ptr = &food;

              cout << *ptr << "\n";
              return 0;
}