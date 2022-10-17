// Obter o tamanho de um array
// para obter o tamanho de uma matriz, voce pode usar o sizeof() operador:
/*
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
              return 0;
              int myNumbers[5] = {10, 20, 30, 40, 50};
              cout << sizeof(myNumbers);
              return 0;
}
*/

// por que o resultado apareceu 20 ao inves de 5, quando a matriz contem 5 elementos?
//é porque sizeof() operador retorna o tamanho de um tipo em bytes.
// Voce aprendeu no capitulo tipo de dados que um int Type é geralmente de 4 bytes, então do exemplo acima, 4 x 5 (4 bytes 5 elementos ) = 20 bytes.
// para descobrir quantos elementos um array tem, voce tem que dividir o tamanho do array por 0 tamanho do tipo de dados que ele contem.

#include <iostream>
using namespace std;

int main()
{
              int myNumbers[5] = {10, 20, 30, 40, 50};
              int getArrayLength = sizeof(myNumbers) / sizeof(int);
              cout << getArrayLength << endl;
              return 0;
}