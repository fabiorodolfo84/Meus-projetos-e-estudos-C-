// para percorrer um array multdimensional voce precisa de um loop para cada uma das dimensoes do array.
// o exemplo a seguir gera todos os elementos deletras : matriz.
/*
#include <iostream>
using namespace std;

int main()
{
              string letters[2][4] = {
                  {"A", "B", "C", "D"},
                  {"E", "F", "G", "H"}

              };
              for (int i = 0; i < 2; i++)
              {
                            for (int j = 0; j < 4; j++)
                            {
                                          cout << letters[i][j] << "\n";
                            }
              }
              return 0;
}

 vamos agora com um exemplo que mostra como percorrer uma matriz tridimensional.
 */
#include <iostream>
using namespace std;

int main()
{
              string letters[2][2][2] = {
                  {{"A", "B"},
                   {"C", "D"}},
                  {

                      {"E", "F"},
                      {"G", "H"}

                  },
              };

              for (int i = 0; i < 2; i++)
              {
                            for (int j = 0; j < 2; j++)
                            {
                                          for (int k = 0; k < 2; k++)
                                          {
                                                        cout << letters[i][j][k] << "\n";
                                          }
                            }
              }

              return 0;
}
