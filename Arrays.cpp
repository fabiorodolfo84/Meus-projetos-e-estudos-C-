// Arrays são usados apra armazenar varios valores em uma unica variavel, em vez de declarar variaveis separadas para cada valor.
// para declarar matriz, defina o tipo de variavel, especifique o nome da matriz seguido por conchete e especifique  o numero de elementos que deve armazenar.

// string cars[4] = {"volvo " , "BMW" , "Ford", "Mazda"};

// para criar uma matriz de tres inteiros, voce pode escrever;
// int myNum[3] = {10, 20, 30};

// acesse os elementos de um array
// voce acessa um elemento de matriz referindo - ao numero do indice dentro do quadrado colchetes[].
// esta instrução acessa o valor do primeiro elemento em carros:
#include <iostream>
#include <string>
using namespace std;
/*
using namespace std;

int main()
{
              string cars[4] = {"Volvo", "Bmw", "Ford", "Mazda"};
              cout << cars[2];
              return 0;
}

*/

// para alterar o valor de um elemento especifico, consulte o numero do indice:

int main()
{
              string cars[4] = {"volvo", "Bmw", "Ford", "Mazda"};
              cars[0] = "Opel";
              cout << cars[0];
              return 0;
}