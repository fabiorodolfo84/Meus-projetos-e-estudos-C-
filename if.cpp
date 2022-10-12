// Condicionais em C++ e instruções if.
// C++ tem as seguintes declarações condicionis:
// use if para especificar um bloco de codigo a ser executado, se uma condição especificada for verdadeira.
// use else para especificar um bloco de codigo a ser executado, se a mesma condição for falsa.
// use else if para especificar uma nova condição a ser testada, se a primeira condição for falsa.
// use switch para especificar muitos blocos alternativos de codigo a serem executados.

// A declaração if, use instrução para especificar um bloco de codigo c++ a ser executado se uma condição for tru.

#include <iostream>
using namespace std;

/*
int main()
{
              if (20 > 18)
              {
                            cout << "20 é maior que 18" << endl;
              }

              return 0;
}
*/
int main()
{
              int x = 20;
              int y = 18;
              if (x > y)
              {
                            cout << "x é maior que y" << endl;
              }
              return 0;
}
