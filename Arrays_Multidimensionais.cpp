// Uum array multidimentsional é um array de arrays.
// para desclarar um array multidimensional, definal o tipo de variavel, especifique o nome do array seguido de colchetes que especificam quantos elementos o principal possui, seguido por outro conjundo de colchetes que indica quantos elementos os subarrays possuem;
// string letters[2][4];
// Assim como em arrays comuns, voce pode inserir valores com um literal de array - uma lista separada por virgulas dentro de chaves, em uma matriz multidimensional, cada elemento em um literal de matriz é outro literal de matriz.

// string letters[2][4] = {
//{"A", "B" , "C", "D"},
//{"E", "F", "G", "H"}
// };

// cada conjunto de colchetes em uma declaração de matriz adiciona outra dimensao a uma matriz. diz-se que uma matriz como a acima tem duas dimensões.

// As matrizes podem ter qualquer numero de dimensoes. quanto mais dimensoes um array tiver, mais complexo o codigo se tornara. A matriz a seguir tem tres dimensoes;

// acesse os elementos de um array multidimensional
// para acessar um elemento de uma matriz multidimensional, especifique um numero de indice em cada uma das dimensoes da matriz.
// esta instrução acessa o valor de elemento na primeira linha(0) e terceira coluna(2) da de letras. matriz.
/*
#include <iostream>
using namespace std;
int main()
{

              string letters[2][4] = {
                  {"A", "B", "C", "D"},
                  {"E", "F", "G", "H"}};
              cout << letters[0][2]; // estou pedindo para imprimir na tela a linha [0] da terceira coluna [2].
              return 0;
              // // outputs "C"
}
*/
// Para alterar o valor de um elemento, consulte o numero de indice do elemento em cada uma das dimensões;

#include <iostream>
using namespace std;

int main()
{
              string letters[2][4] = {
                  {"A", "B", "C", "D"},
                  {"E", "F", "G", "H"}};
              letters[0][0] = "Z";

              cout << letters[0][0];
              cout << letters <<endl;
              return 0;
}