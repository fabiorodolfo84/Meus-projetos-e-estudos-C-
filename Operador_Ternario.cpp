// short hand if...else (operador ternario);
// ha tambem uma abreviaçao if else, que e conhecida como operador ternario porque consiste em tres operandos. ele pode ser usado para substituir varias linhas de codigo com uma unica linha é frequentemente usado para substituir simples if else declarações.

// Sintaxe - variavel = (condição )  ? expressaotrue : expressaofalse;

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
              int time = 20;
              string result = (time < 18) ? "good day." : "good evening.";

              cout << result;
              return 0;
}
