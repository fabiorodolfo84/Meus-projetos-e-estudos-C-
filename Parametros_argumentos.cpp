// Parametros e argumentos
//  As informações podem ser passadas para funçoes como um parametro. os parametros funcionam como variaveis dentro da função.
// os parametros sao especificados apos o nome da função, dentro dos parenteses. voce pode adicionar quantos parametros quiser, basta separa-lo com um virgula.

// ex: void functionName(parameter1, parameter2, parameter3) {

//}

// O exemplo a seguir tem uma funcao que leva uma string chamada fname como parametro. quando a função é chamada, passamos um primeiro nome, que é usado dentro da função para imprimir o nome completo.

#include <iostream>
#include <string>
using namespace std;

/*
void myFunction(string Sobrenome)
{
              cout << Sobrenome << " " "Oliveira \n";
}

int main()
{
              myFunction("fabio");
              myFunction("Luky");
              myFunction("Lunna");
              myFunction("Jully");


              return 0;
}
*/
void myFunction(int soma)
{
              cout << soma << (3 /(1 + 1));
}

int main()
{
              myFunction(7);

              return 0;
}