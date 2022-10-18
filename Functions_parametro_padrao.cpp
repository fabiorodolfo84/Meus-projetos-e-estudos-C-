// valor do parametro padrao
// voce tambem pode usar um valor de paramero padrao, usando o sinal de igual (=).
// se chamarmos a função sem um argumento, ela usara o valor padrao ("Noruega");

#include <iostream>
#include <string>

using namespace std;

void myFunction(string country = "Normay")
{
              cout << country << "\n";
}

int main()
{
              myFunction("Sweden");
              myFunction("India");
              myFunction();
              myFunction("USA");
              myFunction();

              return 0;
}