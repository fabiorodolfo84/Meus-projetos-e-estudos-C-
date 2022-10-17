// Strutcs  (estrutura) sao uma maneira de agrupar varias variaveis relacionadas em um so lugar. cada variavel na estrutura e conhecido como um membro de estrutura.

// ao contrario de um array, um estrutura pode conter  muitos diferentes tipos de dados (int, string, bool, etc.)

// para criar uma estrutura, use o struct palavra- chave e declare cada um de seus membros dentro de chaves.

#include <iostream>
#include <string>
using namespace std;

int main()
{
              struct
              {
                            int myNum;
                            string myString;
              } myStructure;

              myStructure.myNum = 1;
              myStructure.myString = "Hello Fabio!";

              cout << myStructure.myNum << "\n";
              cout << myStructure.myString << "\n";
              return 0;
}
