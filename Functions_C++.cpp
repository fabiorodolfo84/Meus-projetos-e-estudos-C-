// Uma função é um bloco de codigo que so e executado quando é chamado.
// cove pode passar dados, conhecidos como parametros, para uma funçao.
// As funçoes sao usadas para executar certas açoes e sao importantes para reutilizar o codigo: defina o codigo uma vez é use-o muitas vezes.

// criar uma funçao

// C++ fornece pre-definidos funçoes, como main(), que é usado para executar codigo. mas voce tambem pode criar suas proprias funçoes para executar determinadas ações.

// para criar (frequentemente referido como declare ) uma função , especifique o nome da funçao, seguindo por parenteses();

// sintaxe: void myFunction() {
//  }

// myFunction() é o nome da funçao
// void significa que a função nao tem valor de retorno.
// dentro da função  (o corpo) , adicione o codigo que define o que a função deve fazer.
// As funçoes delaradas nao sao executadas imediatamente, elas sao salvas para ser usada posteriormente, quando forem chamados.
// para chamar uma funçao , escreva o nome da função seguido por dois parenteses () e um ponto e virgula;
// no exemplo a seguir, myFunction() é usado para imprimir um texto (a ação), quando é chamado:

#include <iostream>
using namespace std;

void myFunction()
{
              cout << "Fabio Rodolfo De Oliveira";
}

int main()
{
              myFunction();
              system("pause");
              return 0;
}