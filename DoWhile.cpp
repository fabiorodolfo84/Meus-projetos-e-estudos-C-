
// o loop do while é uma variante do while ciclo. este laço vai executar o bloco de codigo uma vez, antes de verificar se a condição é verdadeira, entao ele repita o loop enquanto a condiçao for verdadeira.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
              int i = 0;
              do
              {
                            cout << i << "\n";
                            i++;
              } while (i < 10);
              return 0;
}
