// Herança em c++ e possivel herdar atributos e metodos de uma classe para outra. Agrupamos o conceito herança em duas categorias.

// classe derivada (filho) - a classe que herda de outra classe
// classe base (pai) - a classe que esta sendo herdada

// para herdar uma classe, use o  : simbulo.
// no exemplo abaixo, o car classe (filho ) herda os atributos e metodos do vehicle classe (pai):

#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
              string brand = "ford";
              void honk()
              {
                            cout << "Tuut, tuut! \n";
              }
};

class Car : public Vehicle
{
public:
              string model = "Mustang";
};

int main()
{
              Car myCar;
              myCar.honk();
              cout << myCar.brand + " " + myCar.model;
              return 0;
}