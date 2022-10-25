// especificadores de acosso
// ate agora, voce esta bastante familiarizado com o public palavra- chave que aparece em todos os nossos exemplos de classe.

// O public palavra - chave é um especificador de acesso. os especificadores de acesso definem como os membros (atributos e metodos) de uma classe podem ser acessado.
// Em C++, existem tres especificadores de acesso:
// public = os membros sao acessiveis de fora da classe
// private = membros não podem ser acessados (ou visto) de fora da classe.
// protected = protected - membros não podem ser acessados de fora da classe, no entando, eles podem ser acessados em classes herdadas.

// no exemplo a seguir, demostramos as diferenças entre public e private membros.

#include <iostream>
using namespace std;

class MyClass
{
public:
              int x;

private:
              int y;
};

int main()
{
              MyClass myObj;
              myObj.x = 25;
              myObj.y = 50;  // se voce tentar acessar um mebro privado, ocorrera um erro: "error: y is private"
              return 0;
}

// por padrao, todos os membros de uma classe são private se voce nao especificar um especificador de acesso.