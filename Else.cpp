// A declaração else, para especificar um bloco de codigo a ser executado se a confição for false.

/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
              int time = 20;
              if (time < 18)
              {
                            cout << "Bom dia." << endl;
              }
              else
              {
                            cout << "Boa tarde." << endl;
              }
              return 0;
}
*/
// Use o else if instrução para especificar uma nova condição se a primeira condição for falsa.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
              int time = 22;
              if (time < 10)
              {
                            cout << "Good morning." << endl;
              }
              else if (time < 20)
              {
                            cout << "Good day." << endl;
              }
              else
              {
                            cout << "good evening." << endl;
              }
              return 0;
}

// no exemplo acima, o tempo (22) é maior que 10, entao  primeira condição é false. A proxima condição, no else if declaração, tambem é false, então passamos para o else condição, pois condição 1 e condição 2 são ambas false - e imprima na tela "boa tarde".
// no entanto, se a hora fosse 14, nosso programa imprimiria "Bom Dia".