// LOOP quando voce sabe exatamente quantas vezes deseja percorrer um bloco de codigo, use o for laço em vez de um while ciclo:
#include <iostream>

using namespace std;
/*
int main()
{
              for (int i = 0; i < 5; i++)
              {
                            cout << i << "\n";
              }
              return 0;
}


int main()
{
              for (int i = 0; i < 10; i++)
              {
                            if (i == 4)
                            {
                                          break;
                            }
                            cout << i << "\n";
              }
              return 0;
}
*/

// continue  a instrução interrompe uma iteração (no loop) se ocorrer uma condição especificada, e continua com a proxima iteração no loop.
// este exemplo ignora o valor de 4.

#include <iostream>
using namespace std;

int main()
{
              for (int i = 0; i < 10; i++)
              {
                            if (i == 4)
                            {
                                          continue;
                            }
                            cout << i << "\n";
              }
              return 0;
}