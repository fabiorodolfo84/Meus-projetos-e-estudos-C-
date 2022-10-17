// Loop através de uma matriz
// voce pode percorrer os elementos da matriz com o for ciclo.
// O exemplo a seguir gera todos os elementos nos carros variedade:
/*#include <string>
#include <iostream>
using namespace std;

main(int argc, char const *argv[])
{
              string Truks[4] = {"Volvo", "Scania", "Mercedes", "Iveco"};
              for (int i = 0; i < 4; i++)
              {
                            cout << Truks[i] << endl;
              }
              return 0;
}

//O exemplo a seguir gera o indice de cada elemento junto com seu valor;


#include <iostream>
#include <string>
using namespace std;

int main()
{
              string cars[7] = {"Volvo", "Bmw", "Ford", "Mazda", "Ferrari", "Porshe", "mazda"};
              for (int i = 0; i < 7; i++)
              {
                            cout << i << " : " << cars[i] << endl;
              }
              return 0;
}

*/

// Podemos tambem omitir o tamanho da matriz, voce não precisa especificar o tamanho da matriz. mais se voce nao fizer isso, vai so ser tao grande quanto os elementos que estao inseridos.
// string car[] = {"Volvo ", "BMW", "Ford"};
// isso é completamente bom. No entanto, o problema surge se você quiser espaço extra para elementos futuros. Então voce tem que sobrescrever os valores existentes:

// No entando, se voce especificar o tamanho, a matriz reservara o espaço extra:

// String cars[] = {"Volvo" , "BMW", "Ford"};
// Agora voce pode adicionar um quarto e um quinto elemento sem substituir os outros.
#include <iostream>
#include <string>
using namespace std;

int main()
{
              string cars[5] = {"Volvo", "Bmw", "Ford"};
              cars[3] = "Mazda";
              cars[4] = "Tesla";
              for (int i = 0; i < 5; i++)
              {
                            cout << cars[i] << endl;
              }
              return 0;
}
